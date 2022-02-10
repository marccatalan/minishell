/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_oct_s
*/

#include "../header/header.h"

int    flag_oct_s(va_list ap, int i, char *str)
{
    my_putstr_oct(va_arg(ap, char *));
    return (i);
}