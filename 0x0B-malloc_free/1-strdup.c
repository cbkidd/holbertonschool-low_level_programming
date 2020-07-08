#include "holberton.h"

/**
* strdup - copies string into new allocation of mem
*
* @str: pointer to array
*
* Return: Null or New location address
*
*
*
*/

char *_strdup(char *str)
{

char *p;
unsigned int i = 0;

if (str == 0)
{
	return (NULL);
}

while (str[i] != 0)
{
	i++;
}

i++;

p = malloc(sizeof(char) * i);

if (p == NULL)
{
	return (NULL);
}

for (i = 0; str[i] != 0; i++)
{
	p[i] = str[i];
}
p[i] = 0;
return (p);
}
