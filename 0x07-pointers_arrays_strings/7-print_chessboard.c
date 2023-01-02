#include "main.h"
/**
 * print_chessboard- This is the print_chessboard function
 *
 * Description: This function prints an 8x8 chessboard
 * @a: Takes an array of 8 characters
 * Return: Returns nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
