#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _isupper - prints if c is an uppercase or not
 * @c: parameter of letters
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
