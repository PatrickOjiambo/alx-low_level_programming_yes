/**
 * print_chessboard - prints the chessboard.
 *
 * @a: a pointer to an 8x8 array of characters representing the chessboard
 *
 * Return: void
 */
#include "main.h"
#include<stddef.h>
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}

