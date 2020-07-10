#include "holberton.h"

/**
* malloc_checked - checks if the pointer was malloc'd to certain bytes
* @b: bytes to be malloc'd
*
*
*
*
*
* Return: a
*/

void *malloc_checked(unsigned int b)
{
int *a;

a = malloc(b);

if (a == NULL)
	exit(98);

return (a);
}
