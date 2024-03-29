#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * print_name - prints name given
 * @name: name to be printed
 * @f: pointer to another function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || !(isdigit(name)))
	{
		f(name);
	}
}
