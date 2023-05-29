#include "main.h"
/**
 * _strncpy - copy from an array
 * @dest: variable of interest
 * @src: variable of interest
 * @n: variable of interest
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int r;

	r = 0;
	while (r < n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}

	return (dest);
}
