#include "holberton.h"

/**
* rev_string - reverse string
*
* @s: string
*
*/

void reverse_array(int *a, int n)
{
int i;
int t;
int j;
j = 0;

	while (i < n - 1)
	{
		i++;
	}
	while (j <= i)
	{
		t = a[j];
		a[j] = a[i];
		a[i] = t;
		j++;
		i--;
	}

}
