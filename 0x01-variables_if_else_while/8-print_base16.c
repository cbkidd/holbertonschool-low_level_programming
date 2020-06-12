#include <stdio.h>

/**
* main - prints alphabets
*
* Return: 0
*/

int main(void)
{

int n;
int i;

i = 97;
n = 48;

while (n < 58)
{
putchar(n);
n++;
}
while (i < 103)
{
putchar(i);
i++;
}
putchar('\n');

return (0);
}
