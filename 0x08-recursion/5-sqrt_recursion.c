#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include "main.h"

/**
 * actual_sqrt_recursion - prints square root on n
 * @i: increment variable
 * @n: number of interest
 * Return: -1 if not natural, 0 if it is
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}

/**
 * _sqrt_recursion - prints square root on n
 * @n: number of interest
 * Return: -1 if not natural, 0 if it is
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}
