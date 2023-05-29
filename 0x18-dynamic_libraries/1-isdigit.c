#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _isdigit - prints if c is an alphabet or not
 * @c: parameter of letters
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
