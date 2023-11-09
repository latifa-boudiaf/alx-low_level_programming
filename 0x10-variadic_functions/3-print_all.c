#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @arg: argument to print
 */

void print_char(va_list arg)
{
    printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an int
 * @arg: argument to print
 */

void print_int(va_list arg)
{
    printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: argument to print
 */

void print_float(va_list arg)
{
    printf("%f", (float)va_arg(arg, double));
}

/**
 * print_string - prints a string
 * @arg: argument to print
 */

void print_string(va_list arg)
{
    char *str = va_arg(arg, char *);

    if (str == NULL)
        printf("(nil)");
    else
        printf("%s", str);
}

/**
 * print_all - prints various types given a format string for the arguments
 * @format: string containing type information for args
 */

void print_all(const char *const format, ...)
{
    va_list args;
    int i = 0, j = 0;
    char *sep = "";

    typedef struct {
        char spec;
        void (*printer)(va_list);
    } format_specifier;

    format_specifier specifiers[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
    };

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;
        while (j < 4 && format[i] != specifiers[j].spec)
            j++;

        if (j < 4)
        {
            printf("%s", sep);
            specifiers[j].printer(args);
            sep = ", ";
        }

        i++;
    }

    printf("\n");

    va_end(args);
}

