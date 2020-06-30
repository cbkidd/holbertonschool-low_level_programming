#include "holberton.h"

/**
*
*
*
*
*
*
*/

char *_strstr(char *haystack, char *needle)
{

int i;
int j;
int ye;

i = 0;
j = 0;

while (haystack[i] != '\0')
	{
	while (haystack[i] != needle[0] && haystack[i] != '\0')
	{
		i++;
	}
	if (haystack[i] == '\0')
	{
		return (-1);
	}
	ye = i;
	
	while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
	{
	i++;
	j++;
	}
	}


