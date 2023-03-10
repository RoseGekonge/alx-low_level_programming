#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - appending src to dest
 * @dest: parameter of interest
 * @src: parameter of interest
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
