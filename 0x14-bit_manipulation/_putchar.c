#include "main.h"

/**
 * _putchar - it writes what is in &c
 * @c: argument 
 * Return: c
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
