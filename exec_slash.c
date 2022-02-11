/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "./lib/my/my.h"
#include "./include/mysh.h"

/*bool check_local(char *cmd)
{
    if (my_strncmp(cmd, "./", 2) == 0)
        return true;
    if (my_strncmp(cmd, "/", 1) == 0)
        return true;
    return false;
}

int exec_slash(char **cmd, my_shell *shell)
{
    if (my_strncmp(cmd[0], "./", 2) == 0) {
        return exec_command(cmd[0], cmd, shell->envp);
    }
    else if (my_strncmp(cmd[0], "/", 1) == 0) {
        return exec_command(cmd[0], cmd, shell->envp);
    }
    return 0;
}*/