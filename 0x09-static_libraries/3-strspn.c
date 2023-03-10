#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _strspn - scans for accept in s
 * @s: main variable
 * @accept: query
 * Return: no of bytes of accept in s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
