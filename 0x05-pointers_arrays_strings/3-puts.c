#include "holberton.h"

/**
* _puts - puts string
*
* @str: string
*
*/

void _puts(char *str)
{
while (*str)
	{
	_putchar(*str);
	str++;
	}
_putchar('\n');
}
