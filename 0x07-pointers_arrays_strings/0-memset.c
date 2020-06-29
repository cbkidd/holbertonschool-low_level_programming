#include "holberton.h"

/**
* _memset - sets byte from memory area to value
*
* @s: memory area
* @b: byte to assign
* @n: number of bytes to write
*
* Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
