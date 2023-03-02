#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * swap_int - replaces a with b a vice versa
 * @a: first variable
 * @b: second variable
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
