#include "function_pointers.h"

/**
* int_index - loops through array and compares each element to find 98
* @cmp: compare function being passed at each element
* @size: size of array
* @array: array of integers we are pushing through cmp
*
*
*
*
*
*
* Return: -1, i
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || size <= 0 || array == NULL)
	return (-1);

for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
		return (i);
	}

return (-1);
}
