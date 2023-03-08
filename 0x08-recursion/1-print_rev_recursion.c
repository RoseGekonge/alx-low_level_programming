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
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
