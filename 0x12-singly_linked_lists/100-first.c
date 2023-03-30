#include <stdio.h>

/**
 * printMessage - prints message before main function is execited
 * Description: The function is called automatically before main is executed
 */

void __attribute__((constructor)) printMessage(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
