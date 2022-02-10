/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** dec_to_oct_s
*/

#include "../header/header.h"

void    my_putstr_oct(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < 32 || str[i] == 127) {
            my_putchar('\\');
            my_putstr(dec_to_bas((int)str[i], 8, 1));
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
}