#ifndef MY_H_
#define MY_H_
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int my_compute_factorial_rec(int nb);
int my_compute_power_rec(int nb , int p);
int my_compute_square_root (int nb);
int my_char_isalpha(char str);
int my_find_prime_sup (int nb);
int my_getnbr(char const *str);
int my_isneg (int n);
int my_is_prime (int nb);
void my_putchar (char c);
int my_put_nbr(int nb);
char *my_revstr (char *str);
int my_showmem (char const *str ,int size);
int my_showstr (char const *str);
void my_sort_int_array(int *array, int size);
char **my_str_to_word_array(char *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest , char const *src);
char my_strcmp (char const *s1 , char const *s2);
char * my_strcpy(char * dest, char const * src);
char *my_strdup(char *src);
int my_str_isalpha(char const *str);
int my_str_islower (char const *str);
int my_str_isnum (char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest , char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy (char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap (int *a, int *b);
int my_printf(char *str, ...);

/*my_printf functions*/

    typedef int (*flag_t)(va_list ap, int i, char *str);
    int    my_printf(char *str, ...);
    void    my_putchar(char c);
    int    my_put_nbr(int nb);
    void    my_putstr(char const *str);
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
