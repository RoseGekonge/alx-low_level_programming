#include <stdio.h>

/**
 * main - Printing numbers with putchar
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}
