#include "main.h"

#define SIZEOF_EHDR  sizeof(Elf64_Ehdr)
#define ERR_ELF      "Error: Unable to read ELF header.\n"
#define ERR_FILE     "Error: Unable to open file.\n"
#define ERR_USAGE    "Usage: %s <ELF file>\n"

/**
 * print_elf_header - prints header
 * @ehdr: argument
 */

void print_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr->e_ident[i]); }
	printf("\n");
	printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "");
	printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (ehdr->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		default:              printf("<unknown>\n");     break; }
	printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (ehdr->e_type)
	{
	case ET_EXEC:  printf("EXEC (Executable file)\n");   break;
	case ET_DYN:   printf("DYN (Shared object file)\n"); break;
	default:       printf("<unknown>\n");                break;
	}
	printf("  Entry point address:               0x%lx\n", ehdr->e_entry);
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd;
	ssize_t n;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, ERR_USAGE, argv[0]);
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, ERR_FILE);
		exit(EXIT_FAILURE);
	}
	n = read(fd, &ehdr, SIZEOF_EHDR);
	if (n != SIZEOF_EHDR)
	{
		fprintf(stderr, ERR_ELF);
		close(fd);
		exit(EXIT_FAILURE);
	}
	print_elf_header(&ehdr);

	close(fd);
	exit(EXIT_SUCCESS);
}
