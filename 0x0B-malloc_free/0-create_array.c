#include <stdio.h>
#include <mem.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_array - creates array of certain memory size
 * @size: intended size
 * @c: array
 * Return: results
 */

char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (0);
	}
	for (r = 0; r < size; r++)
	{
		ptr[r] = c;
	}
	return (ptr);
}
