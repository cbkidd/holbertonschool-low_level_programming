#include <stdio.h>
/**
* main - prints 00-99
*
* Return: 0
*/

int main(void)
{
int s;
int c;
int i;
int ii;

s = 32;
c = 44;
i = 48;
ii = 48;

while (i < 58)
{

while (ii < 58)
{
putchar(i);
putchar(ii);
if (i == 57 && ii== 57)
{
break;
}
putchar(c);
putchar(s);
ii++;
}
ii = 48;
i++;
}
putchar('\n');
return (0);
}
