#include "main.h"
#include < stdio.h >
/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 *
 * Return: Alaways 0.
 */
void print_diagsums(int *a, int size);
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}

		_putchar('\n');
	}
}
