#include <stdio.h>
#include "main.h"

/**
 * main - prints argV
 * @argv: array of characters
 * @argc: counts arguments passed
 * Return: zero
 */

int main(char *argv[], int argc)
{
	int r;

	for (r = 0 ; r < argc ; r++)
	{
		_putchar(argv[r]);
	}
	return (0);
}
