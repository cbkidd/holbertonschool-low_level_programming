#include "holberton.h"

/**
* print_sign - prints interger sign and returns 1, 0, or -1
*
* @n: random number
*
* Return: 0, 1, /
*/

int print_sign(int n)
{

	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	if (n == 0)
	{
	_putchar('0');
	return (0);
	}
return (0);
}
