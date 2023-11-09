#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints various types given a format string for the arguments
 * @format: string containing type information for args
 */

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        if (i > 0)
            printf(", ");

        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
        }

        i++;
    }

    printf("\n");

    va_end(args);
}

