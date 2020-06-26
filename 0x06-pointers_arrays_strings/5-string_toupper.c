#include "holberton.h"
/**
* string_toupper - converts all lowercase to upper
* @s: input string pointer
*
* Return: s
*/
char *string_toupper(char *s)
{
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
