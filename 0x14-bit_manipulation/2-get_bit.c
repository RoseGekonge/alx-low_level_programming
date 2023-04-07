#include "main.h"

/**
 * isEven - checks if n is even or odd
 * @num: number to check
 * Return: 0 0r 1
 */

int isEven(int num)
{
	if ((num & 1) == 0)
		return (0);
	else
		return (1);
}

/**
 * get_bit - returns value if bit at certain position
 * @n: decimal nember
 * @index: index to check in binary of n
 * Return: index bit or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	long int b, r, k = 0;

	if (!n)
	{
		return (-1);
	}
	else
	{
		while (k < index)
		{
			n >>= 1;
			k++;
		}
		r = isEven(n);
	}
	b = r;
	return (b);
}
