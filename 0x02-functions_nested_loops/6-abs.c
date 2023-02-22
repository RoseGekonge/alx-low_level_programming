#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints sign
 *
 * @n: number with sign
 *
 * Return: 1 if greater than zero, 0 if equal to zero, -1 if less than zero
 */

int _abs(int k)
{
	if (k < 0)
		return ("%d\n" , k * -1);
	else
		return ("%d\n" , k);
}
