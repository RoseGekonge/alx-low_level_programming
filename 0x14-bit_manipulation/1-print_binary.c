#include "main.h"

/**
 * print_num - prints numbers
 * @g: number to print
 * Return: 0
 */

int print_num(long int g)
{
	fprintf(stdout, "%ld", g);
	return (0);
}

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
	long int m = 0, x = 10, i = 1;

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
	print_num((m + s));
	return (m + s);
}

/**
 * print_binary - converts decimal to binary
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	for_print_binary(n);
}
