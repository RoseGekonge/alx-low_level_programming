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
	int r = 0;
	int k, g;

	if (argc == 1)
	{
		printf("%d", r);
		printf("\n");
	}
	else
	{
		for (k = 0 ; k < argc ; k++)
		{
			if (isdigit(argv[k]) == 0)
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			else
			{
				g = g + atoi(argv[k]);
			}
		}
		printf("%d", g);
	}
	return (0);
}
