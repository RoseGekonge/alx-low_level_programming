#include "main.h"

/**
 * read_textfile - reads a file
 * @filename: the name of the file
 * @letters; limit of chars
 * Return: count or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *r = fopen(filename, "r");
	int k = (int)letters;

	char g[1000];
	int c, count = 0, f = 0;

	if (r == NULL)
		return (0);

	else
	{
		while (!(fread(g, sizeof(char), letters, r)))
		{
			while (count == k)
				break;
			for (c = 0; g[c] != '\0'; c++)
			{
				count++;
			}
			write(1, g, fread(g, sizeof(char), letters, r));
			f++;
		}
	}
	fclose(r);
	return (count);
}
