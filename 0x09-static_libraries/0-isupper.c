#include "holberton.h"

/**
* _isupper - returns 1 if c is uppercase
* @c: ascii value tested
* Return: 0, or 1
*/

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
	return (1);
	}
	if (c > 96 && c < 123)
	{
	return (0);
	}
return (0);
}
