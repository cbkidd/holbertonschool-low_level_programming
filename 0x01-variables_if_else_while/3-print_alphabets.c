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

i = 65;
n = 97;

while (n < 123)
{
putchar(n);
n++;
}
while (i < 91)
{
putchar(i);
i++;
}
putchar('\n');

return (0);
}
