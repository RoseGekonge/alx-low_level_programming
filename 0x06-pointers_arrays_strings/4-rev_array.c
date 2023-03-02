#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse the array
 * @a: array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int r;

	r = n;

	while (r >= 0)
	{
		if (r != n)
		{
			printf("%d", a[r]);
			printf(", ");
		}
		r--;
	}
	printf("\n");
}
