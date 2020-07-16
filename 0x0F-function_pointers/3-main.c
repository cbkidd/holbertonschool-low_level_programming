#include "3-calc.h"

/**
* main - takes input and does appropriate mathematics
* @argc: element of struct ops
* @argv: member of element
*
*
*
*
*
* Return: 0 for pass
*/

int main(int argc, char *argv[])
{
int first_num;
int second_num;
int (*get_op)(int, int);

if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
first_num = atoi(argv[1]);
second_num = atoi(argv[3]);
get_op = get_op_func(argv[2]);

if (second_num == 0 && (*argv[2] == '%' || *argv[2] == '/'))
{
	printf("Error\n");
	exit(100);
}
printf("%d\n", get_op(first_num, second_num));
return (0);
}
