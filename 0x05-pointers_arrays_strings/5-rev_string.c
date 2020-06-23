#include "holberton.h"

/**
* rev_string - reverse string
*
* @s: string
*
*/

void rev_string(char *s)
{
int i;
int t;
int j;
j = 0;

	while (s[i])
	{
		i++;
	}
	i = i - 1;
	while (j <= i)
	{
		t = s[j];
		s[j] = s[i];
		s[i] = t;
		j++;
		i--;
	}

}
