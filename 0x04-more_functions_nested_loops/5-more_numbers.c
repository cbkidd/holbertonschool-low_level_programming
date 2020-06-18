#include "holberton.h"

/**
* more_numbers - prints 0-14
*
*/

void more_numbers(void)
{
int i;
int t;

t = 0;

while (t < 10)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
{
_putchar('0' + (i / 10));
}
_putchar('0' + (i % 10));
}
_putchar('\n');
t++;
}
}
