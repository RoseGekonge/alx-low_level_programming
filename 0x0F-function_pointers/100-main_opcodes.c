#include <stdio.h>
#include <stdlib.h>

/**
 * main - opcode
 * @argc: length
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int len, r;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	len = atoi(argv[1]);
	if (len < 0)
	{
		printf("Error");
		exit(2);
	}
	array = (char *)main;
	for (r = 0; r < len; r++)
	{
		if (r == len - 1)
		{
			printf("%02hhx\n", array[r]);
			break;
		}
		printf("%02hhx", array[r]);
	}
	return (0);
}
