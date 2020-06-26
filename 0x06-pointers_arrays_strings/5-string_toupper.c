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
int j;

	while (s[i])
	{
		i++
	}

	for (j = 0; j < i; j++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
return (s);
}
