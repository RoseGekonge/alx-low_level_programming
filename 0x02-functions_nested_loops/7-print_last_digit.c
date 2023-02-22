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
	int g;

	if (k < 0)
	{
		g = -k % 10;
	}
	else if (k < 0)
	{
		g = k % 10;
	}
	_putchar(g + '0');
	return (g);
}
