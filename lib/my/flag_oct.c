/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_bin
*/

#include "my.h"

int    flag_oct(va_list ap, int i, char *str)
{
    my_putstr(dec_to_bas(va_arg(ap, int), 8, 0));
    return (i);
}