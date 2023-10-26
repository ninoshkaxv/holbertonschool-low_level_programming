#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * This function takes a 2D array representing a chessboard and prints it.
 * Each element of the array is a character representing a chess piece or
 * an empty space.
 *
 * @a: The 2D array to print.
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
