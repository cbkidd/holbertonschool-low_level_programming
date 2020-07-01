#include "holberton.h"

/**
* _strlen_recursion - gets string length
* @s: string
* Return: sting length
*/

int _strlen_recursion(char *s)
{
if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
return (0);
}
