#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - executes the calculations
 * Return: answer
 */

int main(int argc, char **argv)
{
	int r, k;

	if (argc != 3)
	{
		printf("Error");
	}
	else
	{
		r = atoi(argv[0]);
		k = atoi(argv[2]);
		get_op_func(argv[1])(r, k);
	}
	return (0);
}
