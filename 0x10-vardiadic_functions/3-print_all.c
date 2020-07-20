#include "variadic_functions.h"
/**
* print_all - prints all placeholders of desired formats
* @format: data type desired
*
*/


void print_all(const char * const format, ...)
{
int invalid;
int i;
va_list list_of_format;
char *stringarg;

va_start(list_of_format, format);
	i = 0;

	while (format[i] != '\0')
	{
	invalid = 0;
	switch (format[i])
	{
		case 's':
			stringarg = va_arg(list_of_format, char *);
			if (stringarg == NULL)
				{
					printf("(nil)");
				}
			printf("%s", stringarg);
			break;
		case 'f':
			printf("%f", (float)va_arg(list_of_format, double));
			break;
		case 'c':
			printf("%c", (char)va_arg(list_of_format, int));
			break;
		case 'i':
			printf("%d", va_arg(list_of_format, int));
			break;
		default:
			invalid = 1;
			break;
	}
	if (format[i + 1] != '\0' && invalid == 0)
		printf(", ");
	i++;
	}
printf("\n");
va_end(list_of_format);
}
