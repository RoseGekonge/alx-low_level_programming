#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * _memset -  fills memory with a constant byte
 * @s: pointer
 * @b: constant of interest
 * @n: byte size
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
