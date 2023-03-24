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

	len = n;
	if (separator != NULL && len != 0)
	{
		va_start(ap, n);
		if (len == 1)
		{
			printf("%d", va_arg(ap, int));
		}
		for (r = 0; r < len; r++)
		{
			if (r == (len - 1))
			{
				printf("%d", va_arg(ap, int));
			}
			else
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
		}
		va_end(ap);
		printf("\n");
	}
	else
	{
		printf(" ");
	}
}
