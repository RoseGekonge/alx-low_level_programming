#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - returns description of dog
 * @d: pointer to dog details
 * Return: results
 */

void print_dog(struct dog *d)
{
	{
		if (d == NULL)
		{
			printf(" ");
		}
		else if ((*d).name == NULL)
		{
			(*d).name = nill;
		}
		else if ((*d).age == NULL)
		{
			(*d).age = "(nill)";
		}
		else if ((*d).owner == NULL)
		{
			(*d).owner = "(nill)";
		}
	}

	printf("Name: %s\nAge: %d\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
