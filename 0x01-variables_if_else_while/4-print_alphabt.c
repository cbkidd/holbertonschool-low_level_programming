#include <stdio.h>

/**
* main - prints alphabt
*
* Return: 0
*/

int main(void)
{

int n;

n = 97;

while (n < 123)
{
if((n != 101) && (n != 113))
{
putchar(n);
n++;
}
else
{
n++;
}
}
putchar('\n');

return (0);
}
