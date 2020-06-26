#include "holberton.h"

/**
* _strcat - concatenate 2 strings
*
* Return: 0
*
*
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

	while ((dest[i] = src[j]))
	{
		j++;
	}
return (dest);
}
