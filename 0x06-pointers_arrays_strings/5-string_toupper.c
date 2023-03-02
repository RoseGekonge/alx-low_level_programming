#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - appending r to upper case
 * @r: parameter of interest
 * Return: r
 */

char *string_toupper(char *r)
{
	int k;

	k = 0;
	while (r[k] != '\0')
	{
		if (r[k] >= 'a' && r[k] <= 'z')
			r[k] = r[k] - 32;
		k++;
	}
	return (r);
}
