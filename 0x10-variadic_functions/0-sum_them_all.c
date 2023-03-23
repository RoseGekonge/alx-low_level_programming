#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sumation of numbers
 * @n: number of arguments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int r;
	int add;
	int count;
	va_list ap;

	count = n;
	if (n != 0)
	{
		va_start(ap, n);
		add = 0;

		for (r = 0; r < count; r++)
		{
			add += va_arg(ap, int);
		}
		va_end(ap);
	}
	return (0);
}
