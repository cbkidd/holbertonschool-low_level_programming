#include "variadic_functions.h"

/**
* sum_them_all - adds the sum of all passed numbers
* @n: number of ints to pass
*
*
*
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list listovar;

sum = 0;

if (n == 0)
	return (0);

va_start(listovar, n);
for (i = 0; i < n; i++)
{
	sum += va_arg(listovar, int);
}
va_end(listovar);
return (sum);

}
