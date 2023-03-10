#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * main - prints argV
 * @argv: array of characters
 * @argc: counts arguments passed
 * Return: zero
 */

int main(int argc, char **argv)
{
	int r;

	for (r = 0 ; r < argc ; r++)
	{
		_putchar(*argv[r]);
	}
	return (0);
}
