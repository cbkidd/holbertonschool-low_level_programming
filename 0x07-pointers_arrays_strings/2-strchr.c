#include "holberton.h"

/**
* _strchr - locates a character in a string
*
* @s: string
* @c: character to find
*
* Return: *s or 0
*/

char *_strchr(char *s, char c)
{

for (; *s > '\0'; s++)
	{
if (*s == c)
		{
	return ((char *)s);
		}
	}
return (0);
}
