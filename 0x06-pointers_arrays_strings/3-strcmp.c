#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compares s1 and s2
 * @s1: varible of interest
 * @s2: variable of interest
 * Return: r
 */

int _strcmp(char *s1, char *s2)
{
	int r = strcmp(s1, s2);

	return (r);
}
