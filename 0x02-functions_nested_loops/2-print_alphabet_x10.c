#include "holberton.h"

/**
* print_alphabet_x10 - prints the lowercase alphabet 10 times
*
*/

void print_alphabet_x10(void)
{
int i;
int t;

t = 0;

while (t < 10)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
t++;
}
}
