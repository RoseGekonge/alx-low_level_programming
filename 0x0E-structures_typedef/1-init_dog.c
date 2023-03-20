#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - run dog.h
 * @d: d
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: infomation
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
