/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** dec_to_bas
*/

#include "my.h"

int    int_char_len(int nb)
{
    int i = 0;

    while (nb > 0) {
        nb /= 10;
        i++;
    }
    return (i);
}

char    *end_oct(char *dest, int *index, int s)
{
    if (s == 1) {
        while (index[1] != 0) {
            dest[index[0]] = '0';
            index[0]++;
            index[1]--;
        }
        return (dest);
    } else {
        return (dest);
    }
}

char    *dec_to_bas(int nb, int bas, int s)
{
    if (bas == 2)
        return (dec_bin(nb));
    else if (bas == 8)
        return (dec_oct(nb, s));
    else
        return (dec_hex(nb));
}