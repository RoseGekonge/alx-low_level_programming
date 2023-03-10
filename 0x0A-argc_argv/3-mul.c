#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: arguments
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r = atoi(argv[argc - 1]);
	int k = atoi(argv[argc - 2]);

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (-1);
	}
	else
	{
		printf("%d\n", r * k);
		return (0);
	}
}
