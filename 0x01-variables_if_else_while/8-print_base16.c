#include <stdio.h>

/**
 * main - Hexadecimal
 * Return: Always 0 (Success)
 */

int main(void)
{
	char r;
	int g;

	r = 'a';
	g = 0;
	while (g < 10)
	{
		putchar('0' + g);
		g++;
	}
	while (r <= 'f')
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
