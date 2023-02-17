#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a = (n % 10)

	if ((n % 10) > 5)
	{
		printf("Last digit %d is %d and is greater than 5", n, a);
	} else if ((n % 10) == 0)
	{
		printf("Last digit %d is %d and is zero", n, a);
	} else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit %d is %d and is less than 6 and not zero", n, a);
	} else
	{
		printf("invalid");
	}
	return (0);
}
