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
	int r = 0;
	int len = strlen(str);
	char *ptr = malloc(sizeof(char) * (len + 1));

	if (str == NULL || ptr == NULL)
	{
		return (NULL);
	}
	for (; r < len; r++)
	{
		if (str[r] == '\0')
		{
			return (NULL);
		}
		ptr[r] = str[r];
	}
	return (ptr);
}
