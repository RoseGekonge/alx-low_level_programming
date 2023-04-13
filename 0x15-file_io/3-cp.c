#include "main.h"

/**
 * main - main function
 * @ac: number of arguments passed
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int k, g = 1024, j, r;
	char arr[1024];

	if (ac != 3)
	{ dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	r = open(av[1], O_RDONLY);
	if (r == -1 || av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98); }
	k = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (k == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99); }
	while (g == 1024)
	{
		g = read(r, arr, 1024);
		if (g == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98); }
		j = write(k, arr, g);
		if (j == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99); }
		close(r);
		if (close(r) == -1)
		{ dprintf(2, "Error: Can't close fd %d\n", r);
			exit(100); }
		close(k);
		if (close(k) == -1)
		{ dprintf(2, "Error: Can't close fd %d\n", k);
			exit(100); }
	}
	return (0);
}
