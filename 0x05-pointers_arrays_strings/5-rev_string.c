#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int k = 0;
	int g;

	while (s[k] != '\0')
	k++;
	for (g = 0; g < k; g++)
	{
		k--;
		rev = s[g];
		s[g] = s[k];
		s[k] = rev;
	}
}
