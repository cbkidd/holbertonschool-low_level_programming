#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
* struct print_vars - print struct type within function
* @t_vars: print variable type
* @f: print function
*/
typedef struct print_vars
{
	char *t_vars;
	void (*f)(va_list);
} print_vars_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
