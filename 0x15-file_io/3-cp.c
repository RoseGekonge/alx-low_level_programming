#include "main.h"

/**
 * main - main function
 * @ac: number of arguments passed
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int k, g, j;
	FILE *r;
	char arr[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97); }
	r = fopen(av[1], "r");
	if (r == NULL || av[1] == NULL)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98); }
	k = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (k == -1)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99); }
	g = fread(arr, sizeof(char), 1024, r);
	if (g == -1)
	{
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98); }
	j = write(k, arr, g);
	if (j == -1)
	{
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99); }
	fclose(r);
	if (fclose(r) == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100); }
	close(k);
	if (close(k) == -1)
	{
		dprintf(2, "Error: Can't close fd FD_VALUE\n");
		exit(100); }
	return (0);
}
