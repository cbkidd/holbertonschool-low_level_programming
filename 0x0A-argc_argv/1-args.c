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
if (argv != '\0')
{
printf("%d\n", argc);
}
return (0);
}
