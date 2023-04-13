#include "main.h"

/**
 * create_file - writes to a file
 * @filename: name of file to open
 * @text_content: what to write into filename
 * Return: 1 ar -1
 */

int create_file(const char *filename, char *text_content)
{
	int r, g;

	r = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (r == -1)
	{
		return (-1);
	}

	g = write(r, text_content, sizeof(text_content));

	if (g == -1)
	{
		return (-1);
	}

	close(r);
	return (1);
}
