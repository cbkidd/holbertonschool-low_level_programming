#include "holberton.h"

/**
* _pow_recursion - calculates powers of x by y
* @x: base
* @y: exponent
* Return: 1, -1, or calculation
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}

if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
