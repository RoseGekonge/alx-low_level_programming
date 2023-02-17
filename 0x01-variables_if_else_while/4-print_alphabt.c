#include <stdio.h>

/**
 * main - Prints the alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int x;

	for (x = 0; x <= 24; x++)
	{
		putchar(alpha[x]);
	}
	putchar('\n');
	return (0);
}
