#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers without doubles
 * Return: Always 0 (success)
 */

int main(void)
{
	int r;
	int k;
	int g = 0;

	while (g < 10)
	{
		k = 0;
		while (k < 10)
		{
			r = 10;
			while (r < 10)
			{
				if (g != k && g != r && k != r && g < k && k < r)
				{
					putchar('0' + g);
					putchar('0' + k);
					putchar('0' + r);

					if (r + k + g != 7 + 8 + 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
				r++;
			}
			k++;
		}
		g++;
	}
	putchar('\n');
	return (0);
}
