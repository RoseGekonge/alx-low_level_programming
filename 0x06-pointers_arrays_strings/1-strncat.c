#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates at a specific byte
 * @dest: parameter of interest to append to
 * @src: parameter of interest to append with
 * @n: size of file
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	dest = strncat(dest, src, n);
	return (dest);
}
