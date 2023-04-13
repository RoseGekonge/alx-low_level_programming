#include "main.h"

/**
 * append_text_to_file - appends to an already existing file
 * @filename: name of file to open
 * @text_content: what to add to the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int r, k;

	r = open(filename, O_WRONLY | O_APPEND, 0664);
	if (r == -1)
	{
		return (-1);
	}

	k = write(r, text_content, sizeof(text_content));
	if (k == -1)
	{
		return (-1);
	}

	close(r);
	return (1);
}
