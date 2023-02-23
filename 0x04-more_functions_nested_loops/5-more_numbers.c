#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * more_numbers - prints 0 to 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	int r;
	int g;

	for (r = 0 ; r <= 10 ; r++)
	{
		for (g = 0 ; g <= 14 ; g++)
		{
			printf("%d", g);
		}
		printf("\n");
	}
}
