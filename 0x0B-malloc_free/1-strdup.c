#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _strdup - duplicates the string
 * @str: string pointing to what is to be copied
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr = malloc(sizeof(char));
	int len = strlen(str);

	if (str == NULL)
	{
		return (NUL);
	}
	for (int r = 0; r < len; r++)
	{
		ptr[r] = *str;
	}
	return (str);
}
