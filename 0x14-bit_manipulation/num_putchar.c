#include "main.h"

/**
 * print_num - prints numbers
 * @g: number to print
 * Return: 0
 */

int print_num(long int g)
{
	char buff[];
	int len = snprint(buff, 20, "%d", g);
	write (1, buff, len);
	return (0);
}
