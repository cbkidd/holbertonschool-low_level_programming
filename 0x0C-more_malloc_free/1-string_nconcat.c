#include "holberton.h"

/**
* _strlen - gets string length
*
* @s: string
* Return: i
*/

int _strlen(char *s)
{

int i;

if (s == NULL)
	return (0);

for (i = 0; s[i] != '\0'; i++)
{
continue;
}
return (i);
}

#include "holberton.h"

/**
* string_nconcat - concatenates 2 strings to n bytes
* @s1: string 1
* @s2: string 2
* @n: number of bytes to allocate to concatenation
*
* Return: a or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
unsigned int i;
unsigned int j;

unsigned int len1 = _strlen(s1);
unsigned int len2 = _strlen(s2);

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

a = malloc(sizeof(char) * (len1 + n + 1));

if (a == NULL)
{
	free(a);
	return (NULL);
}

for (i = 0; i < len1; i++)
{
	a[i] = s1[i];
}
for (j = 0; j < n; j++)
{
	if (j < len2)
	{
		a[i] = s2[j];
	}
	else
	{
		a[i] = '\0';
	}
}
a[i] = '\0';
return (a);
}
