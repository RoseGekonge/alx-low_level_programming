#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: where to find the occurence
 * @needle: the occurence to find
 * Return: pointer to the beginning of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
