/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** check_flags
*/

#include "my.h"

int    check_flags(va_list ap, char *str, int i)
{
    flag_t flag_specifier[] = {
        ['c'] = flag_char,
        ['d'] = flag_int,
        ['s'] = flag_str,
        ['u'] = flag_uint,
        ['b'] = flag_bin,
        ['o'] = flag_oct,
        ['x'] = flag_hex,
        ['X'] = flag_hex,
        ['S'] = flag_oct_s,
        ['%'] = flag_mod,
        ['i'] = flag_sig,
        ['#'] = flag_hash,
        ['f'] = flag_float,
        ['p'] = flag_ptr
    };
    i = flag_specifier[str[i]](ap, i, str);
    return (i);
}