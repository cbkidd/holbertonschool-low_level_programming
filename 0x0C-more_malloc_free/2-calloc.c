#include "holberton.h"

/**
* _calloc - returns pointer to allocated mem
* @nmemb: bytes to allocate
* @size: size of data type to allocate
*
*
*
*
*
*Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *a;

if (size == 0 || nmemb == 0)
	return (NULL);

a = malloc(size * nmemb);

if (a == NULL)
	return (NULL);

for (i = 0; i < nmemb * size; i++)
{
	a[i] = 0;
}

return ((void *) a);
}
