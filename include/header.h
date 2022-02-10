/*
** EPITECH PROJECT, 2018
** header.h
** File description:
** header
*/

#ifndef HEADER_H_
    #define HEADER_H_
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include "../../my.h"

    typedef int (*flag_t)(va_list ap, int i, char *str);
    int    my_printf(char *str, ...);
    void    my_putchar(char c);
    int    my_putnbr(int nb);
    void    my_putstr(char const *str);
    int    my_strlen(char const *str);
    char    *my_revstr(char *str);
    char    *dec_to_bas(int nb, int bas, int s);
    int    check_flags(va_list ap, char *, int);
    int    flag_char(va_list ap, int i, char *str);
    int    flag_int(va_list ap, int i, char *str);
    int    flag_str(va_list ap, int i, char *str);
    int    flag_uint(va_list ap, int i, char *str);
    int    flag_oct(va_list ap, int i, char *str);
    int    flag_oct_s(va_list ap, int i, char *str);
    int    flag_bin(va_list ap, int i, char *str);
    int    flag_hex(va_list ap, int i, char *str);
    int    flag_extra(va_list ap, int i, char *str);
    int    flag_err(va_list ap, int i, char *str);
    int    flag_hash(va_list ap, int i, char *str);
    int    flag_hash_lhex(va_list ap, int i, char *str);
    int    flag_hash_uhex(va_list ap, int i, char *str);
    int    flag_hash_oct(va_list ap, int i, char *str);
    int    flag_hash_bin(va_list ap, int i, char *str);
    int    flag_mod(va_list ap, int i, char *str);
    int    flag_sig(va_list ap, int i, char *str);
    int    flag_float(va_list ap, int i, char *str);
    int    flag_ptr(va_list ap, int i, char *str);
    void    my_putstr_oct(char *str);
    char    *dec_bin(int nb);
    char    *dec_hex(int nb);
    char    *dec_oct(int nb, int s);
    int    int_char_len(int nb);
    void    my_putfloat(double nb);

#endif