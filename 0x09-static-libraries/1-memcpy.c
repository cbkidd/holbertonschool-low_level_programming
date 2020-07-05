#include "holberton.h"

/**
* _memcpy - copies bytes from src to dest
* @dest: destination area
* @src: source area
* @n: number of bytes
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	{
dest[i] = src[i];
	}
return (dest);
}
