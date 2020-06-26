#include "holberton.h"

/**
* _strncat - concatenate 2 strings
* @dest: string 1
* @src: string 2
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
int len;
len = 0;

	while (dest[len])
	{
		len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}
dest[len + i] = '\0';
return (dest);
}
