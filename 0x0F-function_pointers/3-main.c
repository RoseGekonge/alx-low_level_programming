#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - executes the calculations
 * @argv: array
 * @argc: length of arry
 * Return: answer
 */

int main(int argc, char **argv)
{
	int r, k;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && argv[3] == 0) || (*argv[2] == '%' && argv[3] == 0))
	{
		printf("Error");
		exit(100);
	}
	else
	{
		r = atoi(argv[1]);
		k = atoi(argv[3]);
		get_op_func(argv[2])(r, k);
	}
	return (0);
}
