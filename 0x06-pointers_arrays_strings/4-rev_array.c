#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array of integers to reverse
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
    int start = 0;
    int end = n - 1;
    int temp;

    while (start < end)
    {
        /* Swap elements a[start] and a[end] */
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}

