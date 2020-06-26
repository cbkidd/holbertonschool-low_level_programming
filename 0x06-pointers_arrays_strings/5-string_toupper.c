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
	i++;
	}

	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] -= 32;
		}
	}
return (s);
}
