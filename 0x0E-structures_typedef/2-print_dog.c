#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - returns description of dog
 * @d: pointer to dog details
 * Return: results
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	else if ((*d).name == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", "nil", (*d).age, (*d).owner);
	}
	else if (!((*d).age))
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", (*d).name, "nil", (*d).owner);
	}
	else if ((*d).owner == NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, "nil");
	}
	else
	{
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}
