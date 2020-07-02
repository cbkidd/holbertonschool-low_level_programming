#include "holberton.h"
int squarerooter(int i, int n);
/**
* _sqrt_recursion - returns natural square root
* @n: number to find square of
* Return: square root
*/
int _sqrt_recursion(int n)
{
	int x;

	x = squarerooter(0, n);

	return (x);
}
/**
* squarerooter - checks for square roots
* @i: start of check for square
* @n: number we find square of
* Return: square root
*/
int squarerooter(int i, int n)
{
	int x;

	if ((i * i) == n)
	{
	x = i;
	}
	if ((i * i) < n)
	{
	x = squarerooter(i + 1, n);
	}
	if ((i * i) > n)
	{
	x = -1;
	}
	return (x);
}
