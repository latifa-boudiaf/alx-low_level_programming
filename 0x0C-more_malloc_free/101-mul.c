#include "main.h"

/**
 * find_length - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_length(char *str)
{
    int length = 0;

    while (*str++)
        length++;

    return length;
}

/**
 * create_x_array - Creates an array of chars and initializes it with
 *                 the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 *
 * Description: If there is insufficient space, the
 *              function exits with a status of 98.
 * Return: A pointer to the array.
 */
char *create_x_array(int size)
{
    char *array;
    int index;

    array = malloc(sizeof(char) * size);

    if (array == NULL)
        exit(98);

    for (index = 0; index < (size - 1); index++)
        array[index] = 'x';

    array[index] = '\0';

    return array;
}

/**
 * iterate_zeros - Iterates through a string of numbers containing
 *                  leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterated through.
 *
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeros(char *str)
{
    while (*str && *str == '0')
        str++;

    return str;
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 *
 * Description: If c is a non-digit, the function
 *              exits with a status of 98.
 * Return: The converted int.
 */
int get_digit(char c)
{
    int digit = c - '0';

    if (digit < 0 || digit > 9)
    {
        printf("Error\n");
        exit(98);
    }

    return digit;
}

/**
 * calculate_product - Multiplies a string of numbers by a single digit.
 * @result: The buffer to store the result.
 * @multiplier: The string of numbers.
 * @digit: The single digit.
 * @zeros: The necessary number of leading zeroes.
 *
 * Description: If multiplier contains a non-digit, the function
 *              exits with a status value of 98.
 */
void calculate_product(char *result, char *multiplier, int digit, int zeros)
{
    int multiplier_length, num, tens = 0;

    multiplier_length = find_length(multiplier) - 1;
    multiplier += multiplier_length;

    while (*result)
    {
        *result = 'x';
        result++;
    }

    result--;

    while (zeros--)
    {
        *result = '0';
        result--;
    }

    for (; multiplier_length >= 0; multiplier_length--, multiplier--, result--)
    {
        if (*multiplier < '0' || *multiplier > '9')
        {
            printf("Error\n");
            exit(98);
        }

        num = (*multiplier - '0') * digit;
        num += tens;
        *result = (num % 10) + '0';
        tens = num / 10;
    }

    if (tens)
        *result = (tens % 10) + '0';
}

/**
 * add_numbers - Adds the numbers stored in two strings.
 * @final_result: The buffer storing the running final product.
 * @next_result: The next product to be added.
 * @next_length: The length of next_result.
 */
void add_numbers(char *final_result, char *next_result, int next_length)
{
    int num, tens = 0;

    while (*(final_result + 1))
        final_result++;

    while (*(next_result + 1))
        next_result++;

    for (; *final_result != 'x'; final_result--)
    {
        num = (*final_result - '0') + (*next_result - '0');
        num += tens;
        *final_result = (num % 10) + '0';
        tens = num / 10;

        next_result--;
        next_length--;
    }

    for (; next_length >= 0 && *next_result != 'x'; next_length--)
    {
        num = (*next_result - '0');
        num += tens;
        *final_result = (num % 10) + '0';
        tens = num / 10;

        final_result--;
        next_result--;
    }

    if (tens)
        *final_result = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Description: If the number of arguments is incorrect or one number
 *              contains non-digits, the function exits with a status of 98.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    char *final_result, *next_result;
    int size, index, digit, zeros = 0;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    if (*(argv[1]) == '0')
        argv[1] = iterate_zeros(argv[1]);
    if (*(argv[2]) == '0')
        argv[2] = iterate_zeros(argv[2]);
    if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
    {
        printf("0\n");
        return 0;
    }

    size = find_length(argv[1]) + find_length(argv[2]);
    final_result = create_x_array(size + 1);
    next_result = create_x_array(size + 1);

    for (index = find_length(argv[2]) - 1; index >= 0; index--)
    {
        digit = get_digit(*(argv[2] + index));
        calculate_product(next_result, argv[1], digit, zeros++);
        add_numbers(final_result, next_result, size - 1);
    }
    for (index = 0; final_result[index]; index++)
    {
        if (final_result[index] != 'x')
            putchar(final_result[index]);
    }
    putchar('\n');

    free(next_result);
    free(final_result);

    return 0;
}

