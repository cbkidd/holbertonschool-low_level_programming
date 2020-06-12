#include <stdio.h>
#include <stdlib.h>

/**
* main - prints 0-9
*
* Return: 0
*/

int main(void)
{
int n;

n = 0;

while (n < 10)
{
printf("%d", n);
n++;
}
putchar('\n');
return (0);
}
