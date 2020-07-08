#include "holberton.h"

/**
* create_array - creates an array of characters
* @size: size desired
* @c: byte to initialize to
*
*
*
* Return: NULL, fail, or arr
*/

char *create_array(unsigned int size, char c)
{

char *arr;
unsigned int x;

if (size == 0)
{
	return (NULL);
}

arr = malloc(sizeof(char) * size);

if (arr == NULL)
{
	return (NULL);
}

for (x = 0; x < size; x++)
{
	arr[x] = c;
}
arr[x] = '\0';
return (arr);
}
