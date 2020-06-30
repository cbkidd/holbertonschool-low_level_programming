#include "holberton.h"
/**
* print_chessboard - prints chess board
* @s: array
*
* Return: null
*/
void print_chessboard(char (*s)[8])
{
	int j;
	int i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(s[i][j]);
		}
		_putchar('\n');
	}
}
