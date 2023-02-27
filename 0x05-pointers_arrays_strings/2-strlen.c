#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _strlen - returns length
 * @s: variable of interest
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
