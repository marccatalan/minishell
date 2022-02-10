/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_int
*/

#include "../header/header.h"

int    flag_int(va_list ap, int i, char *str)
{
    my_putnbr(va_arg(ap, int));
    return (i);
}