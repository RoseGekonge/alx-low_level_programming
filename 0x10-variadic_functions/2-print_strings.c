#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - separates strings with a separator
 * @separator: separates strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int len, r;
	va_list ap;

	len = n;
	if (separator != NULL && len != 0)
	{
		va_start(ap, n);
		if (len == 1)
		{
			printf("%s", va_arg(ap, char *));
		}
		for (r = 0; r < len; r++)
		{
			if (r == len -1)
			{
				printf("%s", va_arg(ap, char *));
				break;
			}
			printf("%s%s", va_arg(ap, char *), separator);
		}
		va_end(ap);
		printf("\n");
	}
	else
	{
		printf(" ");
	}
}
