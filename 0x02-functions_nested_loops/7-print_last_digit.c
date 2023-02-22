#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - prints las digit
 *
 * @k: variable of interest
 *
 * Return: returns r
 */

int print_last_digit(int k)
{
	int a;

	if (k < 0)
	k = -k;

	a = k % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}

