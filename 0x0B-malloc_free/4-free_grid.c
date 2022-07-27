#include "main.h"
#include <stdlib.h>
/**
* free_grid - Frees a 2-dimensional array of integers.
* @grid: a two dimensiobal array of integers
* @height:the height if the grid
*/
void free_grid(int **grid, int height)
{
	 int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
