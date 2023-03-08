#include <unistd.h>
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - prints x to the power of y
 * @x: base number
 * @y: power value
 * Return: the result of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (pow(x, y));
	}
}
