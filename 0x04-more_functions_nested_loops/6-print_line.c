#include "holberton.h"

/**
* print_line - prints a line n amount of times
* @n: number of lines
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	if (n < 0)
	{
	_putchar('\n');
	}
	_putchar('_');
	}
_putchar('\n');
}
