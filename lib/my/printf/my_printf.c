/*
** EPITECH PROJECT, 2018
** my_printf.c
** File description:
** my_printf
*/

#include "header/header.h"

int    flag_valid(char c)
{
    int i = 0;
    char *flags = "cdsuboxX%#ifp\0";

    while (flags[i]) {
        if (flags[i] == c)
            return (0);
        i++;
    }
    return (-1);
}

int    my_printf(char *str, ...)
{
    int i = 0;
    va_list ap;
    va_start(ap, str);

    while (str[i]) {
        if (str[i] == '%') {
            if (flag_valid(str[i + 1]) == 0)
                i = check_flags(ap, str, i + 1);
            else
                my_putchar(str[i]);
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(ap);
    return (0);
}