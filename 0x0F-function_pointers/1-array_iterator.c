#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * array_iterator - executes action
 * @array: array
 * @size: size of array
 * @action: pointer to function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int r;

	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
