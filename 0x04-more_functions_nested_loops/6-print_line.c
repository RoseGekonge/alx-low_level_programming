#include <stdio.h>
#include  <unistd.h>
#include "main.h"

/**
 * print_line - prints _x n
 *
 * @n: parameter for letter
 *
 * Return: nothing
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (k = 0 ; k <= n ; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

