#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_rev - reverses the strings
 * @s: string of interest
 */

void print_rev(char *s)
{
	int r;
	int k;

	r = strlen(s);
	for (k = 0; k < r; k--)
	{
		printf("%s",char *s[k]);
	}
	printf("\n");
}
