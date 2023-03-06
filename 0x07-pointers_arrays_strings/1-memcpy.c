#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - coppy n byte memory to dest fro src
 * @dest: where to copy memory
 * @src: source of memory
 * @n: byte size of memory
 * Return: memcpy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
