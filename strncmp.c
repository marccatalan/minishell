/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "./lib/my/my.h"
#include "./include/mysh.h"

int strncmp(char *s1, char *s2, int n)
{
    int i = 0;
    int j = 0;

    if (!s1 || !s2)
        return 84;
    while (s1[i] != '\0' && s2[j] != '\0' && i < n) {
        if (s1[i] - s2[j] < 0)
            return (s1[i] - s2[j]);
        if (s1[i] - s2[j] > 0)
            return (s1[i] - s2[j]);
        i = i + 1;
        j = j + 1;
    }
    if (s1[i] != s2[j])
        return 1;
    return 0;
}