#include "variadic_functions.h"

/**
* print_strings - print numbers passed with a comma and space
* @separator: comma space
* @n: number of strings to print
*
*
*
*
*
*
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
char *stringarg;

va_start(list, n);

for (i = 0; i < n; i++)
{
	stringarg = va_arg(list, char*);

if (stringarg != NULL)
	printf("%s", stringarg);
else
	printf("(nil)");

if (separator != NULL && i < (n - 1))
{
	printf("%s", separator);
}

}
printf("\n");

if (va_arg(list, char*) == NULL)
	printf("(nil)");

va_end(list);
}
