#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - returns everything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	int r = 0;
	char *str, *ting = "";
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[r])
		{
			switch (format[r])
			{
				case 'c':
					printf("%s%c", ting, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", ting, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", ting, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", ting, str);
					break;
				default:
					r++;
					continue;
			}
			ting = ", ";
			r++;
		}
	}
	printf("\n");
	va_end(list);
}
