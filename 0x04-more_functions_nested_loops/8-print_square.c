#include "main.h"

/**
 * print_square - Prints a square of a specified size
 * @size: The size of the square
 */
void print_square(int size)
{
    if (size <= 0) {
        _putchar('\n'); // If size is 0 or less, print only a new line
        return;
    }

    int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            _putchar('#'); // Use '#' character to print the square
        }
        _putchar('\n'); // Move to the next line after printing a row
    }
}
