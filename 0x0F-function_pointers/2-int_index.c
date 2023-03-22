#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * int_index - it searches for an integer
 * @array: pool of integers
 * @size: length of array
 * @cmp: pointer to function of interest
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int r, g;

	if (size <= 0)
	{
		return (-1);
	}
	for (r = 0; r < size; r++)
	{
		g = cmp(array[r]);
		if (g)
		{
			return (g);
		}
	}
	return (-1);
}
