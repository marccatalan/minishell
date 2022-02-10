/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_char
*/

#include "my.h"

int    flag_char(va_list ap, int i, char *str)
{
    my_putchar(va_arg(ap, int));
    return (i);
}