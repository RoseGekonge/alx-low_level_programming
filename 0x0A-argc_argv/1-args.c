#include <stdio.h>

/**
 * main - number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d", --argc);
	printf("\n");
	return (0);
}
