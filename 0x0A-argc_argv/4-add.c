#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argv: array of arguments
 * @argc: number of arguments in array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int k, g, d;

	g = 0;

	if (argc < 2)
	{
		printf("%d", 0);
		printf("\n");
	}
	else
	{
		for (k = 1 ; k < argc ; k++)
		{
			d = atoi(argv[k]);
			if (d == 0 || d < 0)
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			g = g + atoi(argv[k]);
		}
		printf("%d", g);
		printf("\n");
	}
	return (0);
}
