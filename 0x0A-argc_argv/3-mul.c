#include "holberton.h"
#include <stdlib.h>

/**
* main - multiplies index 1 by index 2 of argv
* @argc: number of arguments
* @argv: arguments
*
* Return: 1 or 0
*
*
*/

int main(int argc, char **argv)
{
int product;
int var1;
int var2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

var1 = atoi(argv[1]);
var2 = atoi(argv[2]);
product = (var1 *var2);

if (argc == 3)
{
printf("%d\n", product);
}

return (0);
}
