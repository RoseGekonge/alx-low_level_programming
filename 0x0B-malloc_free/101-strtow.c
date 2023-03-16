#include <stdlib.h>
#include <stdio.h>

/**
 * count - count length
 * @s: pointer to string
 * Return: length
 */

char count(char *s)
{
	int r, k, g;

	r = 0;
	k = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (c[g] == ' ')
		{
			r = 0;
		}
		else if (r == 0)
		{
			r = 1;
			k++;
		}
	}
	return (k);
}

/**
 * strtow - concatenate the arguments
 * @str: pointer to arguments input
 * Return: string
 */

char **strtow(char *str)
{
	char **s, *c;
	int r, k, len, arr, g, start, end;

	k = 0;
	len = 0;
	g = 0;

	while (*(str + len))
	{
		len++;
	}
	arr = count(str);

	if (arr == 0)
	{
		return (NULL);
	}

	s = (char**)malloc(sizeof(char*) * (arr + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (r = 0; r <= len ; r++)
	{
		if (str[r] == ' ' || str[r] == '\0')
		{
			if (g)
			{
				end = r;
				c = (char *)malloc(sizeof(char) * ( g + 1));

				if (c == NULL)
				{
					return (NULL);
				}

				while (start < end)
				*c++ = str[start++];
				*c = '\0';
				s[k] = c - g;
				k++;
				g = 0;
			}
		}
		else if (g++ == 0)
		{
			start = r;
		}
	}
	s[k] = NULL;

	return (s);
}
