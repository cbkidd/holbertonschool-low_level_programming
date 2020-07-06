#include "holberton.h"

/**
* main - prints each argument fed into main
* @argc: string length
* @argv: string
*
* Return: 0
*/

int main(int argc, char **argv)
{
int i;
i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
