#include "holberton.h"

/**
* print_diagonal - prints a line n amount of times
* @n: number of lines
*/

void print_diagonal(int n)
{
	int i;
	int t;

	for (i = 0; i < n; i++)
	{
	for (t = 0; t < i; t++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	if (n < 0)
	{
	_putchar('\n');
	}
}
