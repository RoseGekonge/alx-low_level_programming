#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _strpbrk - locate occurance
 * @s: what to locate
 * @accept: variable of interest
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
		s++;
	}
	return ('\0');

}
