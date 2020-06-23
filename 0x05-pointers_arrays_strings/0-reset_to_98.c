#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
* reset_to_98 - assigns a pointer to variable n that makes its value 98
*
* @n: pointer variable
*
*/

void reset_to_98(int *n)
{
int var;
int *n;

var = 0;
n = &var;
*n = 98;

}
