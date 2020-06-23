#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
* swap_int - swaps values of two integers
* @a: variable a
* @b: variable b
*
*/

void swap_int(int *a, int *b)
{
int c;

c = *b;
*b = *a;
*a = c;
}
