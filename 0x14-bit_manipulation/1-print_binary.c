#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int r;
	int k = 0, g;

	for (g = 63; g >= 0; g--)
	{
		r = n >> g;

		if (r & 1)
		{
			k++;
			_putchar('1');
		}
		else if (k)
		{
			_putchar('0');
		}
	}
	if (!k)
	{
		_putchar('0');
	}
}
