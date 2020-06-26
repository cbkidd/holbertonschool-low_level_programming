#include "holberton.h"
/**
* leet - makes leet
* @str: string
* Return: leet str
*/
char *leet(char *str)
{
	char b[] = "aAeEoOtTlL";
	char a[] = "4433007711";

	int i;
	int j;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (b[j] == *(str + i))
			{
				*(str + i) = a[j];
			}
		}
	}
	return (str);
}
