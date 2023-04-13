#include "main.h"

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, fd;
	Elf64_Ehdr elf_header;
	
	if (argc != 2)
	{ fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98); }
	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{ fprintf(stderr,"Error: Cannot open file %s\n", argv[1]);
		exit(98); }
	if(lseek(fd, 0, SEEK_SET) == -1)
	{ fprintf(stderr, "Error: Cannot set file offset\n");
		exit(98); }
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{ fprintf(stderr, "Error: Cannot read ELF header\n");
		exit(98); }
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || 
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{ fprintf(stderr,"Error: %s is not an ELF file\n", argv[1]);
		exit(98); }
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{ printf("%02x ", elf_header.e_ident[i]); }
	printf("\n");
	printf("Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", elf_header.e_type);
	printf("Entry point address:               %lx\n", elf_header.e_entry);
	if( close(fd) == -1)
	{ fprintf(stderr, "Error: Cannot close file descriptor\n");
		exit(98); }
	return (0);
}
