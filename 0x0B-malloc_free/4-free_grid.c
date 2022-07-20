#include "main.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 * @param grid 
 * @param height 
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
