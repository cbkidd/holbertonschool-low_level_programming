#include "holberton.h"

/**
* print_square - prints a line n amount of times
* @size: size of box
*/

void print_square(int size)
{
	int i;
	int t;

	for (i = 0; i < size; i++)
	{
	for (t = 0; t < size; t++)
	{
	_putchar('#');
	}
	_putchar('#');
	_putchar('\n');
	}
	if (size <= 0)
	{
	_putchar('\n');
	}
}
