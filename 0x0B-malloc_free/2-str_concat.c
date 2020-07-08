#include "holberton.h"
/**
* _strlen - gets string length
* @s: string
*
* Return: i or NULL
*/
int _strlen(char *s)
{
int i;

if (s == NULL)
{
	return (0);
}

for (i = 0; i != '\0'; i++)
{
	continue;
}

return (i);
}
/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
*
* Return: null or str
*/
char *str_concat(char *s1, char *s2)
{
int l1 = _strlen(s1);
int l2 = _strlen(s2);
int i, j;
char *catto = malloc(sizeof(char) * (l1 + l2) + 1);

if (catto == NULL)
{
	return (NULL);
}
for (i = 0; i < l1; i++)
{
	catto[i] = s1[i];
}

for (j = 0; j < l2; i++, j++)
{
	catto[i] = s2[j];
}

catto[i] = '\0';
return (catto);

}
