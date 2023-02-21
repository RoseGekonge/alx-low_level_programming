#include <stdio.h>
#include  <unistd.h>
#include "main.h"

/**
 * _islower - prints if letter is lower case
 *
 * @r: parameter for letter
 *
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
		return (1);
	else
		return (0);
}
