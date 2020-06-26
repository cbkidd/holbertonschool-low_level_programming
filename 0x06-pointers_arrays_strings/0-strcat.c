#include "holberton.h"

/**
* _strcat - concatenate 2 strings
* @dest: string 1
* @src: string 2
*
* Return: 0
*/

char *_strcat(char *dest, char *src)
{
int j;
int i;
i = 0;
j = 0;
	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
dest[i] = '\0';
return (dest);
}
