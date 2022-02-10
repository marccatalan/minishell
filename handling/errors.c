/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "../lib/my/my.h"
#include "../include/mysh.h"

int command_not_found(char *cmd)
{
    my_putstr(cmd);
    my_putstr(": Command not found.\n");
    return 1;
}

int get_segfault(int segfault)
{
    if (!WIFEXITED(segfault) && WIFSIGNALED(segfault)) {
        if (WTERMSIG(segfault) == 8)
            my_putstr("Floating exception\n");
        else
            my_putstr(strsignal(WTERMSIG(segfault)));
        if (WCOREDUMP(segfault)) {
            my_putstr(" (core dumped)\n");
            return 139;
        }
        return 1;
    }
    return 0;
}

int exec_error(char *cmd)
{
    if (errno == ENOEXEC) {
        my_putstr(cmd);
        my_putchar('\n');
        my_putstr(": Exec format error. Wrong Architecture.\n");
        return 1;
    } else if (errno == EACCES) {
        my_putstr(cmd);
        my_putchar('\n');
        my_putstr(": Permission denied.\n");
        return 1;
    }
    return 0;
}