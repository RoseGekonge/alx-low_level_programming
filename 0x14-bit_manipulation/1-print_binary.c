#include "main.h"

/**
 * isEven - checks if od or even
 * @num: number to check
 * Return: 0 or 1
 */

int isEven(int num)
{
	if ((num & 1) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * for_print_binary - converts decimal to binary
 * @n: decimal number
 * Return: binary
 */

int for_print_binary(unsigned long int n)
{
	long int num = 0, f, s, b;
	long int m = 0, x = 10, g, i = 1;

	s = isEven(n);
	while (n > 1)
	{
		n >>= 1;
		b = isEven(n);
		while (num < (i - 1))
		{
			x *= 10;
			num++;
		}
		f = b * x;
		m += f;
		i++;
	}
	g = m + s;
	return (g);
}

/**
 * print_binary - converts decimal to binary
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	for_print_binary(n);
}
