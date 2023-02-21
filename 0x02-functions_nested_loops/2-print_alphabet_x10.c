#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int index = 1;

	while (index <= 10)
	{
		int i;

		for (i = 0; i < 26; i++)
		{
			_putchar('a' + i);
		}
		_putchar('\n');
		index++;
	}
}
