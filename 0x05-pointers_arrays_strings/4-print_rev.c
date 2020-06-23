#include "holberton.h"

/**
* print_rev - puts string in reverse
*
* @s: string
*
*/

void print_rev(char *s)
{
for (; *s != '\0'; s++)
{
continue;
}
for (; *s >= 0; s--)
{
_putchar(*s);
}
_putchar('\n');
}
