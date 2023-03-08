#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: string of interest
 */

void _print_rev_recursion(char *s)
{
	int k;
	int r = strlen(s);

	for (k = r - 1 ; k >= 0; k--)
	{
		printf("%c", s[k]);
	}
}
