#include "holberton.h"

/**
* reverse_array - reverse array
* @n: length of array
* @a: array
*
*/

void reverse_array(int *a, int n)
{
int i;
int t;
int j;
j = 0;
i = 0;
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
