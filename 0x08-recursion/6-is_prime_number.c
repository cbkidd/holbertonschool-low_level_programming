#include "holberton.h"
int prime(int x, int n);
/**
* is_prime_number - calculates prime number
* @n: test numbers
* Return: prime
*/
int is_prime_number(int n)
{
	return (prime(3, n));
}
/**
* prime - function that returns whether a number is prime
* @x: starter number
* @n: number tested as prime number
* Return: n
*/
int prime(int x, int n)
{
	if (n <= 1)
	{
	return (0);
	}
	if (n <= 3)
	{
	return (1);
	}
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	{
	return (0);
	}

	if ((x * x) <= n)
	{
		if (n % x != 0 || n % (x + 2) != 0)
			{
			prime(x + 6, n);
			}
		else if (n % x == 0 || n % (x + 2) == 0)
			{
			return (0);
			}
	}
	return (1);
}
