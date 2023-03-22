#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name given
 * @name: name to be printed
 * @f: pointer to another function
 */

void print_name(char *name, void (*f)(char *))
{
	char ptr = f(name);

	printf("%c", ptr);
}
