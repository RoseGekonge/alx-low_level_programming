#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * print_chessboard - for a chessboard
 * @a: variable of interest
 */

void print_chessboard(char (*a)[8])
{
	int r, k;

	for (r = 0; r < 8; r++)
	{
		for (k = 0; k < 8; k++)
		{
			printf("%c", a[r][k]);
			if (k == 7)
			{
				printf("\n");
			}
		}
	}
}
