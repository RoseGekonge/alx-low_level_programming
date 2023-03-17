#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocating blocks
 * @ptr: pointer to a previously allocated memory
 * @old_size: size of allocated space
 * @new_size: size of reallocated space
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int r, i;

	ptr = malloc(old_size);
	void *alloc = realloc(ptr, new_size);
	void *val = malloc(new_size);

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (val);
	}
	else
	{
		r = new_size - old_size;

		for (i = 1; i < r + 1; i++)
		{
			alloc + i = ptr + i;
			return (alloc);
		}
	}
}
