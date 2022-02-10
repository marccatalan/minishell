/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** my_putchar
*/

#include "../header/header.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

int    my_strlen(char const *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}

int    my_putnbr(int nb)
{
    if (nb < 0) {
        if (nb == -2147483648) {
            my_putchar('-');
            my_putchar('2');
            my_putnbr(147483648);
        } else {
            my_putchar('-');
            my_putnbr(-nb);
        }
    } else {
        if (nb > 9)
            my_putnbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return (0);
}

char    *my_revstr(char *str)
{
    char tmp;
    int x = 0;
    int y = my_strlen(str) - 1;

    while (x < y) {
        tmp = str[x];
        str[x] = str[y];
        str[y] = tmp;
        x++;
        y--;
    }
    return (str);
}