#include "holberton.h"

/**
* jack_bauer - prints military time
*
*/

void jack_bauer(void)
	{
	int h;
	int m;

	for (h = 0; h < 24; h++)
	{
	for (m = 0; m < 60; m++)
	{
	_putchar('0' + (h / 10));
	_putchar('0' + (h % 10));
	_putchar(58);
	_putchar('0' + (m / 10));
	_putchar('0' + (m % 10));
	_putchar('\n');
	}
	}
	}
