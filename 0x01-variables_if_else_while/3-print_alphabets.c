#include <stdio.h>

/**
 * main - Prints the alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x <= 51; x++)
	{
		putchar(alpha[x]);
	}
	putchar('\n');
	return (0);
}
