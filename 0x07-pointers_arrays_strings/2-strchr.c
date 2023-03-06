#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _strchr -  locates a character in a string.
 * @s: where to look for the occurence
 * @c: what to look for
 * Return: returns pointer to the occurence
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
