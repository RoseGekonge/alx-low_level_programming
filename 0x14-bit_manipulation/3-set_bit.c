#include "main.h"

/**
 * set_bit - assings 1 at index
 * @n: number to change
 * @index: position
 * Return: 0 or 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int r;
	unsigned int k;

	k = sizeof(unsigned long int) * 8;
	if (index >= k)
		return (-1);

	r = 1 << index;
	*n = *n | r;
	return (1);
}
