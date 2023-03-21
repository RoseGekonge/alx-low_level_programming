#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * length - determines length of string
 * @r: pointer to string that is to be counted
 * Return: length
 */

int length(char *r)
{
	int k;

	for (k = 0; r[k] != '\0'; k++)
	{

	}
	return (k);
}

/**
 * copy - imitates original
 * @dest: new pool
 * @src: old pool
 * Return: dest
 */

char *copy(char *dest, char *src)
{
	int size, g;

	size = 0;
	while (src[size] != '\0')
	{
		size++;
	}
	for (g = 0; g < size; g++)
	{
		dest[g] = '\0';
	}
	dest[g] = '\0';
	return (dest);
}

/**
 * new_dog - main function
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: results
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int size1, size2;

	size1 = length(name);
	size2 = length(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (size1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (size2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	copy(dog->name, name);
	copy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
