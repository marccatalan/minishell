/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** flag_hash_bas
*/

#include "../header/header.h"

int    flag_hash_bin(va_list ap, int i, char *str)
{
    my_putstr("0b");
    my_putstr(dec_to_bas(va_arg(ap, int), 2, 0));
    return (i);
}

int    flag_hash_uhex(va_list ap, int i, char *str)
{
    my_putstr("0X");
    my_putstr(dec_to_bas(va_arg(ap, int), 16, 0));
    return (i);
}

int    flag_hash_lhex(va_list ap, int i, char *str)
{
    my_putstr("0x");
    my_putstr(dec_to_bas(va_arg(ap, int), 16, 0));
    return (i);
}

int    flag_hash_oct(va_list ap, int i, char *str)
{
    my_putstr("0");
    my_putstr(dec_to_bas(va_arg(ap, int), 8, 0));
    return (i);
}
