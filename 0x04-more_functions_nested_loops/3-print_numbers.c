#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_numbers - prints 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int g;

	g = 0;

	for (g = 0 ; g <= 9 ; g++)
	{
		printf("%d", g);
	}
}
