#include "holberton.h"

/**
* _islower - returns 1 if c is lowercase
* @c: ascii value tested
* Return: 0, or 1
*/

int _islower(int c)
{
	if (c > 64 && c < 91)
	{
	return (0);
	}
	if (c > 96 && c < 123)
	{
	return (1);
	}
return (0);
}
