#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of your program
 * @ac: no. of arguments
 * @av: array
 * Return: new string
 */

char *argstostr(int ac, char **av)
{
	int r, k, g, len;
	char *arr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < ac; r++)
	{
		for (k = 0; av[r][k] != '\0'; k++)
		{
			len++;
		}
		len++;
	}

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	g = 0;

	for (r = 0; r < ac; r++)
	{
		for (k = 0; av[r][k] != '\0'; k++)
		{
			arr[g] = av[r][k];
			g++;
		}
		arr[g] = '\n';
		g++;
	}
	return (arr);
}
