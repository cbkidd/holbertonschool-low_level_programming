#include "holberton.h"

/**
* free_grid - does the thing you'd expect
* @grid: grid shit
* @height: tall dude
*
*
* 
*/

void free_grid(int **grid, int height)
{
if (height > 0)
	free (grid);
}
