/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** flag_ptr
*/

#include "my.h"

int    flag_ptr(va_list ap, int i, char *str)
{
    my_putstr("0x");
    my_putstr(dec_to_bas((int)(va_arg(ap, void *)), 16, 0));
    return (i);
}