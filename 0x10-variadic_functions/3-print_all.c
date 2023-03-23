#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Prints any number of values based on a format string
 *
 * @format: The format string containing the types of values to print
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          any other char should be ignored
 * @...: The list of values to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    int num;
    char ch;
    float f;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                ch = va_arg(args, int);
                printf("%c", ch);
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%d", num);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);
                break;
            default:
                break;
        }
        if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
            printf(", ");
        i++;
    }

    va_end(args);

    printf("\n");
}

