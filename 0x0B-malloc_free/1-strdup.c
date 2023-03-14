#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates the string
 * @str: string pointing to what is to be copied
 * Return: pointer
 */

char *_strdup(char *str)
{
	int r;
	char *ptr = malloc(sizeof(char));
	int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < len; r++)
	{
		ptr[r] = *str;
	}
	return (str);
}
