#include <stdio.h>

/**
 * main - arguments in diferent lines
 * @argc: array of an argument
 * @argv: number of char in the argument
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0 ; r < argc ; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
