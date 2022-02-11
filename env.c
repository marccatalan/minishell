/*
** EPITECH PROJECT, 2022
** env_lines.c
** File description:
** searches for specific lines in a given position
*/

#include "../include/my.h"
#include "../include/mysh.h"

int print_env(char **str, my_shell *shell)
{
    int i = 0;

    while (shell->envp[i] != NULL) {
        my_putstr(shell->envp[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}