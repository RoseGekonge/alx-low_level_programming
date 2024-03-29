#include <stdio.h>
#include <stdlib.h>

/**
 * memset_do - memset
 * @s: .....
 * @b: .....
 * @n: .....
 * Return: s
 */

char *memset_do(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset_do(ptr, 0, nmemb * size);
	return (ptr);
}
