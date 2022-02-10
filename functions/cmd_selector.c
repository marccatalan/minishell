/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "../lib/my/my.h"
#include "../include/mysh.h"

bool check_cmd(char *cmd)
{
    if (my_strncmp(cmd, "cd", 3) == 0)
        return true;
    if (my_strncmp(cmd, "exit", 5) == 0)
        return true;
    if (my_strncmp(cmd, "setenv", 7) == 0)
        return true;
    if (my_strncmp(cmd, "unsetenv", 9) == 0)
        return true;
    return false;
}

int do_cmd(char **cmd, my_shell *shell)
{
    if (my_strncmp(cmd[0], "cd", 3) == 0)
        my_printf("cd");
        //return do_cd(cmd, shell->envp);
    if (my_strncmp(cmd[0], "exit", 5) == 0)
        my_exit(0);
    if (my_strncmp(cmd[0], "setenv", 7) == 0)
        my_printf("setenv");
        //return my_setenv(cmd, shell);
    if (my_strncmp(cmd[0], "unsetenv", 9) == 0)
        my_printf("unsetenv");
        //return my_unsetenv(shell, cmd);
    return 0;
}