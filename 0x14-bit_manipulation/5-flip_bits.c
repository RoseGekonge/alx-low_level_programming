#include "main.h"

/**
 * isEven - checks for even
 * @num: number to check
 * Return: 0 and 1
 */

int isEven(int num)
{
	if ((num & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * flip_bits - checks differences
 * @n: first number
 * @m: second number
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^m;
	unsigned int c, count = 0, g = 0;

	while (r > 0)
	{
		r >>= 1;
		count++;
	}
	for (c = 0; c < count; c++)
	{
		if (isEven(n ^ m))
		{
			g++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (g);
}
