#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _abs - prints sign
 *
 * @n: number with sign
 *
 * Return: 1 if greater than zero, 0 if equal to zero, -1 if less than zero
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}

