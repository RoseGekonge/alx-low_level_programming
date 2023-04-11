#include "main.h"

/**
 * read_textfile - reads and writes from a file
 * @filename: file to be read
 * @letters: byte limit to be read
 * Return: number of bytes written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t bytes_read, bytes_written;
	int fd = open(filename, O_RDONLY);

	if (!fd || filename == NULL)
	{
		return (0);
	}
	buf = malloc(letters);
	bytes_read = read(fd, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	free(buf);
	close(fd);
	return (bytes_written);
}
