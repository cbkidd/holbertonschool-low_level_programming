#include "holberton.h"

/**
* array_range - creates array from min to max
* @min: min inputs
* @max: max inputs
*
*
*
*
*
*
*
* Return: a, NULL
*/

int *array_range(int min, int max)
{
int i;
int j;
int *a;

i = min;

a = malloc(sizeof(int) * ((max - min) + 1));

if (min > max)
	return (NULL);

for (j = 0; i <= max; j++, i++)
	a[j] = i;
return (a);
}
