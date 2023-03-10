#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _isalpha - prints if c is an alphabet or not
 * @c: parameter of letters
 * Return: 1 if alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
