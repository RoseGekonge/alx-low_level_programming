#include <stdio.h>
#include  <unistd.h>
#include "main.h"

/**
 * print_line - prints _x n
 *
 * @n: parameter for letter
 *
 * Return: 1 if lowercase, 0 if not
 */

void print_line(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('_');
	}
	else
	{
		for (k = 0 ; k <= n ; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

