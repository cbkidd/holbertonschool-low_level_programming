nclude "holberton.h"
/**
* print_array - prints an array
* @a: input array
* @n: number of objects in array
*
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
