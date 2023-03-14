#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate s2 to s1
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int r = 0;
	int k = 0

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[r] != '\0')
	{
		r++;
	}
	while (s2[k] != '\0')
	{
		ptr = malloc(sizeof(char) * (r + k + 1));
		
		if (ptr == NULL)
		{
			return (NULL);
		}

