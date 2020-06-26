#include "holberton.h"

/**
* _strncpy - concatenate 2 strings
* @dest: string 1
* @src: string 2
* @n: byte to stop
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
int len;
len = 0;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
	dest[i] = '\0';
	}
dest[len + i] = '\0';
return (dest);
}
