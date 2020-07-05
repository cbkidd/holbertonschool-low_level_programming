#include "holberton.h"

/**
* _strspn - compares string to substring and counts matches
*
* @s: string
* @accept: accepted matches
*
* Return: count
*/

unsigned int _strspn(char *s, char *accept)
{
int len;
int count;
int j;

count = 0;
len = 0;
j = 0;

while (s[len])
{
	while (accept[j])
	{
		if (s[len] == accept[j])
		{
			count++;
			j = 0;
			break;
		}
	j++;
	}
len++;
}
return (count);
}
