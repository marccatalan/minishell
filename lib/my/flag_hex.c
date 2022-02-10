/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_hex
*/

#include "my.h"

int    flag_hex(va_list ap, int i, char *str)
{
    my_putstr(dec_to_bas(va_arg(ap, int), 16, 0));
    return (i);
}