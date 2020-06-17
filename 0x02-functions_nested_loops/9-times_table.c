#include "holberton.h"
/**
* times_table - prints multiplication table, 0-9
*
*/
void times_table(void)
{
	int x;
	int y;
	int mul;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
		mul = y * x;
		if (mul > 9)
		{
		_putchar('0' + (mul / 10));
		}
		_putchar('0' + (mul % 10));
		if (y < 9)
		{
		_putchar(',');
		if (((y + 1) * (x)) < 10)
		{
		_putchar(' ');
		}
		_putchar(' ');
		}
		}
		_putchar('\n');
	}
}
