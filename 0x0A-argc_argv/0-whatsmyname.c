#include <stdio.h>

/**
 * main - prints argV
 * @argv: array of characters
 * @argc: counts arguments passed
 * Return: zero
 */

int main(int argc, char **argv)
{
	int r;

	for (r = 0 ; r < argc ; r++)
	{
		printf("%s", argv[r]);
	}
	printf("\n");
	return (0);
}
