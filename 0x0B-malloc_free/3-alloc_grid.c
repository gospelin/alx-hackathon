#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 * A pointer to pointer method is used, by first
 * dynamically allocating
 *
 * @width: width of the grid
 * @height: height of the grid
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	array = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		*(array + i) = (int *)malloc(width * sizeof(int));
	}

	if (array == NULL)
	{
		return (NULL);
	}

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			/* *(*(array + i) + j) = 0; */
			array[i][j] = 0;
		}
	}
	return (array);
}
