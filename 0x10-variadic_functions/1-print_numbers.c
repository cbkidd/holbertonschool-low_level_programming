#include "variadic_functions.h"

/**
* print_numbers - print numbers passed with a comma and space
* @separator: comma space
* @n: number of ints to print
*
*
*
*
*
*
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(list, int));
if (i < (n - 1))
{
	printf("%s", separator);
}

if (separator == NULL)
	break;
}
printf("\n");
va_end(list);
}
