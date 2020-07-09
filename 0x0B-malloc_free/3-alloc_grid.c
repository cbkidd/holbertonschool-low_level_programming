#include "holberton.h"

/**
* alloc_grid - does stuff
* @height: hieght
* @width: widening
*
*
* Return: Null
*/

int **alloc_grid(int width, int height)
{
int *a;

if (height == 0 || width == 0)
	return (NULL);

a = malloc(10);

free(a);

return (NULL);
}
