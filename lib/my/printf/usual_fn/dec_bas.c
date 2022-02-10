/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** dec_bas
*/

#include "../header/header.h"

char    *dec_bin(int nb)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * int_char_len(nb) + 1);

    while (nb > 0) {
        dest[i] = nb % 2 + 48;
        nb = nb / 2;
        i++;
    }
    dest[i] = '\0';
    return (my_revstr(dest));
}

char    *dec_hex(int nb)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * int_char_len(nb) + 1);

    while (nb > 0) {
        if (nb % 16 > 9 && nb % 16 < 17)
            dest[i] = nb % 16 + 87;
        else
            dest[i] = nb % 16 + 48;
        nb = nb / 16;
        i++;
    }
    dest[i] = '\0';
    return (my_revstr(dest));
}

char    *dec_oct(int nb, int s)
{
    int i = 0;
    int ret = 3;
    char *dest = malloc(sizeof(char) * int_char_len(nb) + 1);

    while (nb > 0) {
        dest[i] = nb % 8 + 48;
        nb = nb / 8;
        i++;
        ret--;
    }
    if (ret > 0 && s == 1) {
        while (ret != 0) {
            dest[i] = '0';
            i++;
            ret--;
        }
    }
    dest[i] = '\0';
    return (my_revstr(dest));
}