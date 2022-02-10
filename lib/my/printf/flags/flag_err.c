/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag_err
*/

#include "../header/header.h"

void    my_puterr(char c)
{
    write(2, &c, 1);
}

void    my_putstr_err(char const *str)
{
    int i = 0;
    while (str[i]) {
        my_puterr(str[i]);
        i++;
    }
}

int    flag_err(va_list ap, int i, char *str)
{
    my_putstr(va_arg(ap, char *));
    return (i);
}