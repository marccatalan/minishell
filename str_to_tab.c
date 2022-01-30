/*
** EPITECH PROJECT, 2021
** print example
** File description:
** example
*/

#include "./lib/my/my.h"
#include "./include/include"
#include "./include/mysh.h"

void tabprint(char **tab) {
    int i = 0;

    while (tab[i++] != NULL) {
        my_printf("Line : %s\n", tab[i]);
    }
}

int	tab_len(char **tab) {
    int i;

    for (i = 0; tab[i] != NULL; i++);
    return (i);
}

int	count_sep(char *str, char sep) {
    int ret = 0;
    int i = 0;

    while (str[i++] != '\0') {
      if (str[i] == sep)
        ret++;
    }
    return (ret);
}

int	length_of_str(char *str, int i, char sep) {
    int ret = 0;

    while (i < my_strlen(str) && str[i] != sep) {
        ret++;
        i++;
    }
    return (ret);
}

char **str_to_tab(char *str, char sep) {
    int i = 0;
    int j = 0;
    int s_len;
    char **params = malloc(sizeof(char *) * (count_sep(str, sep) + 2));

    while (str[i] != '\0') {
        s_len = length_of_str(str, i, sep);
        if (s_len > 0) {
            params[j] = malloc(sizeof(char) * (s_len + 1));
            my_strncpy(params[j], str + i, s_len);
            params[j][s_len] = '\0';
            j++;
            i += s_len;
        }
        else
        i++;
        }
    params[j] = NULL;
    return (params);
}