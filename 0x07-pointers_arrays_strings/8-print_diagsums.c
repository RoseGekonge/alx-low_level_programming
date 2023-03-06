#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_diagsums - sum of diagonals
 * @a: array of interest
 * @size: no of rows/columns
 */

void print_diagsums(int *a, int size)
{
	int add, add2, r;

	add = 0;
	add2 = 0;

	for (r = 0; r < size; r++)
	{
		add = add + a[r * size + r];
	}

	for (r = size - 1; r >= 0; r--)
	{
		add2 += a[r * size + (size - r - 1)];
	}

	printf("%d, %d\n", add, add2);
}
