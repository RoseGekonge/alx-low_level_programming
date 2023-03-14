#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2d array
 * @width: width
 * @height: height
 * Return: pointer to matrix
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int r, k;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		arr[r] = (int *)malloc(sizeof(int) * width);

		if (arr[r] == NULL)
		{
			free(arr);
			for (k = 0; k <= r; k++)
			{
				free(arr[k]);
				return (NULL);
			}
		}
	}
	for (r = 0; r < height; r++)
	{
		for (k = 0; k < width; k++)
		{
			arr[r][k] = 0;
		}
	}
	return (arr);
}
