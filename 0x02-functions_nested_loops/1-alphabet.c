#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints all alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char num = 'a';

	for (num = 'a' ; num <= 'z'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
