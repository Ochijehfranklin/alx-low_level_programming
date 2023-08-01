#include "main.h"

/**
 * print_chessboard - This function prints a chessboard
 *
 * @a: pointer the the arry for chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			printf("%c", a[x][y]);
		}
		printf("\n");
	}
}
