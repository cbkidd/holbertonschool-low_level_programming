#include "holberton.h"
#include <stdlib.h>
/**
* main - adds string iterations
* @argv: variable to be added
* @argc: number of variables to add
*
* Return: 0 or 1
*
*/

int main(int argc, char **argv)
{
int i;
int sum;

if (argc - 1 == 0)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (argv[i][0] != '0' && atoi(argv[i]) <= 0)
{
printf("Error\n");
}
sum += (atoi(argv[i]));
}

printf("%d\n", sum);
return (0);
}

