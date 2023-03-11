#include <stdio.h>
#include <unistd.h>

/**
 * main - adds positive numbers
 * @agrv: array of arguments
 * @argc: number of arguments in array
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int r = 0;
	int k;
	int g;

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
				return (0);
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
