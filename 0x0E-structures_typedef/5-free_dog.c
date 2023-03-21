#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free
 * @d: pointer to array
 * Return: d
 */

 void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
