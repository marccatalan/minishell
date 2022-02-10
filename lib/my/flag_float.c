/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** flag_float
*/

#include "my.h"

int    flag_float(va_list ap, int i, char *str)
{
    my_putfloat(va_arg(ap, double));
    return (i);
}