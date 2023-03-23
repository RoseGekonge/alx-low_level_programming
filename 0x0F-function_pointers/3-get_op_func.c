#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - decides function to use
 * @s: operator
 * @(int, int): numbers of interest
 * Return: result
 */

int (*get_op_func(char *s))(int, int)
{
	int a;
	int b;
	char input;

	input = &s;

	switch (input)
	{
		case '+':
			op_add(a, b);
			break;
		case '-':
			op_sub(a, b);
			break;
		case '*':
			op_mul(a, b);
			break;
		case '/':
			op_div(a, b);
			break;
		case '%':
			op_mod(a, b);
			break;
		default:
			return (NULL);
	}
	return (0);
}
