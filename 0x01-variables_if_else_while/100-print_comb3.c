#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers without doubles
 * Return: Always 0 (success)
 */

int main(void)
{
	int r;
	int g = 0;

	while (g < 10)
	{
		r = 0;
		while (r < 10)
		{
			if (g != r && g < r)
			{
				putchar('0' + g);
				putchar('0' + r);

				if (r + g != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			r++;
		}
		g++;
	}
	putchar('\n');
	return (0);
}
