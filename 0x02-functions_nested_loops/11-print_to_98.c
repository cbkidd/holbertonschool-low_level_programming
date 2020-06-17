#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - makes n print to 98
* @n: integer input
*
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	if (n > 98)
	{
		for (n = n; n > 98; n--)
	{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
