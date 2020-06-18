#include "holberton.h"

/**
* print_most_numbers - prints most numbers
*
*/

void print_most_numbers(void)
{

int n;

n = 48;

while (n < 58)
{
if ((n != 50) && (n != 52))
{
_putchar(n);
n++;
}
else
{
n++;
}
}
_putchar('\n');
}
