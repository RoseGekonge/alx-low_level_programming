#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: binary number
 * Return: m
 */

unsigned int binary_to_uint(const char *b)
{
	int k, f, a, r, g, l, m = 0;

	for (k = 0; b[k] != '\0'; k++)
	{
		;
	}
	if (b == NULL)
	{
		return (0);
	}
	for (r = 0; b[r] != '\0'; r++)
	{
		if ((b[r]) != '1' && (b[r]) != '0')
		{
			return (0);
		}
		f = 1;
		a = k - r - 1;
		for (g = 0; g < a; g++)
		{
			f *= 2;
		}
		l = (((b[r]) - 48) * f);
		m += l;
	}
	return (m);
}
