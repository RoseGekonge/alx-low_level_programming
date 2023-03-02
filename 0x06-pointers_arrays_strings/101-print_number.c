#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * print_number - prints the numbers given
 * @g: variable of interest
 * Returns: nothing
 */

void print_number(int g)
{
	unsigned int g1;

	g1 = g;

	if (g < 0)
	{
		_putchar('-');
		g1 = -g;
	}

	if (g1 / 10 != 0)
	{
		print_number(g1 / 10);
	}
	_putchar((g1 % 10) + '0');

}
