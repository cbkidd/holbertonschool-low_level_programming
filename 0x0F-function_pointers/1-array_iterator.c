#include "function_pointers.h"

/**
* array_iterator - executes function in may for every element of array
* @action: function being passed
* @array: array function action is passing
* @size: size of array
*
*
*
*
* Return:
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
	return;

for (i = 0; i < size; i++)
	action(array[i]);

}
