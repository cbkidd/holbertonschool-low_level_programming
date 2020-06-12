#include <stdio.h>

/**
* main - prints 0-9 with commas and spaces
*
* Return: 0
*/

int main(void)
{
int s;
int c;
int i;

s = 32;
c = 44;
i = 48;

while (i < 58)
{
putchar(i);
i++;
if (i < 58)
{
putchar(c);
putchar(s);
}
}
putchar('\n');

return (0);
}
