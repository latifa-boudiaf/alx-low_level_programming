#include <string.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers represented as strings
 * @n1: Text representation of the first number to add
 * @n2: Text representation of the second number to add
 * @r: Pointer to the buffer to store the result
 * @size_r: Buffer size
 *
 * Return: A pointer to the result (in the buffer r) or 0 if it cannot fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, carry, sum, index, i, j;

    len1 = strlen(n1) - 1;
    len2 = strlen(n2) - 1;
    carry = 0;
    index = 0;

    while (len1 >= 0 || len2 >= 0 || carry > 0)
    {
        sum = carry;

        if (len1 >= 0)
        {
            sum += n1[len1] - '0';
            len1--;
        }

        if (len2 >= 0)
        {
            sum += n2[len2] - '0';
            len2--;
        }

        carry = sum / 10;
        if (index >= size_r - 1) /* Check if the result can fit in the buffer */
            return 0;

        r[index] = (sum % 10) + '0';
        index++;
    }

    r[index] = '\0';

    for (i = 0, j = index - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return (r);
}

