#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - returns numbers separated by separator
 * @separator: string to be printed
 * @n: length og arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int len, r;
	va_list ap;

	if (separator != NULL)
	{
		len = n;

		va_start(ap, n);
		for (r = 0; r < len; r++)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		va_end(ap);
		printf("\n");
	}
	else
	{
		printf(" ");
	}
}
