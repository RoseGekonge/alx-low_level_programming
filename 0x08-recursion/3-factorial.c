#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - n!
 * @n: number to permutate
 * Return: factrorial of n
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
				}
				_putchar('\n');
				}

