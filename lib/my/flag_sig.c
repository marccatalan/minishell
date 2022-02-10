/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_sig
*/

#include "my.h"

int    flag_sig(va_list ap, int i, char *str)
{
    my_put_nbr(va_arg(ap, int));
    return (i);
}