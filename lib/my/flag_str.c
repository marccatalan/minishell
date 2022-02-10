/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_str
*/

#include "my.h"

int    flag_str(va_list ap, int i, char *str)
{
    my_putstr(va_arg(ap, char *));
    return (i);
}