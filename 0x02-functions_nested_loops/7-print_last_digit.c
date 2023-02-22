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
	int r = k % 10;
	return (r);
}
