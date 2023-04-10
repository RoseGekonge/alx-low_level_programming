#include "main.h"

/**
 * get_endianness - checks for endians
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int r = 1;
	char *p = (char *)&n;

	if (*p)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
