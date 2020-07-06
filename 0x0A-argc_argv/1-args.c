#include "holberton.h"

/**
* main - counts number of arguments fed into main
* @argc: arguments
* @argv: string
*
* Return: 0
*/

int main(int argc, char **argv)
{

if (argv != NULL)
{
printf("%d\n", argc - 1);
}

return (0);
}
