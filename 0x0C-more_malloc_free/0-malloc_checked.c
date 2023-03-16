#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: variable
 * Return: result
 */

void *malloc_checked(unsigned int b)
{
	int NUM = 98;

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(NUM);
	}
	return (ptr);
}
