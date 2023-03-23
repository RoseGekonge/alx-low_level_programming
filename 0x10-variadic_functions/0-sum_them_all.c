#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sumation of numbers
 * @n: number of arguments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	int r, add;

	add = 0;

	for (r = 0; r < n; r++)
	{
		add += va_arg(ap, int);
	}
	va_end(ap);
	return (0);
}
