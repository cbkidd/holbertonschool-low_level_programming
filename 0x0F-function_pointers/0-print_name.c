#include "function_pointers.h"

/**
* print_name - prints name in argument of main
* @name: string input to print
* @f: function to pass string through
*
*
*
* Return:
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
	return;

if (f == NULL)
	return;

f(name);
}
