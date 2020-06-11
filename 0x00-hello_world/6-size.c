#include <stdio.h>

/**
* main - prints size of various types
*
*
* Return: 0
*
*
*/

int main(void)
{

printf("Size of an char: %lu bytes(s)\n", sizeof(char));
printf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
