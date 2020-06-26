#include "holberton.h"
/**
* rot13 - cipher
* @s: string
*
* Return: s
*/
char *rot13(char *s)
{
	int i;
	int j;
	char r1[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char r2[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; r2[i] != '\0'; i++)
		{
			if (s[j] == r2[i])
			{
				s[j] = r1[i];
				break;
			}
		}
	}
	return (s);
}
