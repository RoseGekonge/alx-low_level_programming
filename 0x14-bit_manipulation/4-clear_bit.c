#include "main.h"

/**
 * clear_bit - replaces 1 with 0
 * @n: decimal of interest
 * @index: position to edit
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int g, r, num = *n;
	unsigned int f, k = sizeof(unsigned long int) * 8;

	for (f = 1; f < index + 1; f++)
	{
		;
	}

	if (index >= k)
		return (-1);
	else
	{
		r = 1 << index;
		g = num >> f;
		if ((g % 2) == 0 && *n != 0)
			*n = *n ^ r;
		else
			*n = *n;

	}
	return (1);
}
