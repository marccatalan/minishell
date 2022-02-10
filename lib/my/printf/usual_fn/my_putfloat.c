/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** my_putfloat
*/

#include "../header/header.h"

void    my_putfloat(double nb)
{
    int i = 0;

    my_putnbr((int)nb);
    my_putchar('.');
    while (i < 6 && (int)nb % 10 != 0 && (int)(nb * 10) % 10 != 0) {
        nb *= 10;
        my_putchar((int)nb % 10 + 48);
        i++;
    }
}