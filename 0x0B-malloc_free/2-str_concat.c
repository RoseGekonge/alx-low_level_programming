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
	int k = 0;
	int len1 = 0;
	int len2 = 0;

	while  (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);

	if (s1)
	{
		while (s1[r] != '\0')
		{
			ptr[r] = s1[r];
			r++;
		}
	}
	if (s2)
	{
		while (s2[k] != '\0')
		{
			ptr[r] = s2[k];
			r++;
			k++;
		}
	}
	ptr[r] = '\0';

	return (ptr);
}
