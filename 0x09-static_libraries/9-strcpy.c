#include "holberton.h"
/**
* _strcpy - copy destination string from source string
* @dest: char array to copy
* @src: char array to be copied
* Return: pointer
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *store = dest;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (store);
}
