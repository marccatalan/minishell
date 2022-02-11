/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "./lib/my/my.h"
#include "./include/mysh.h"

bool check_cmd(char *cmd)
{
    if (strncmp(cmd, "cd", 3) == 0)
        return true;
    if (strncmp(cmd, "env", 3) == 0)
        return true;
    if (strncmp(cmd, "exit", 5) == 0)
        return true;
    if (strncmp(cmd, "setenv", 7) == 0)
        return true;
    if (strncmp(cmd, "unsetenv", 9) == 0)
        return true;
    return false;
}

int do_cmd(char **cmd, my_shell *shell)
{
    if (strncmp(cmd[0], "cd", 3) == 0)
        my_printf("cd");
        //return do_cd(cmd, shell->envp);
    if (strncmp(cmd[0], "env", 3) == 0)
        print_env(shell->envp, shell);
    if (strncmp(cmd[0], "exit", 5) == 0)
        my_exit(0);
    if (strncmp(cmd[0], "setenv", 7) == 0)
        my_printf("setenv");
        //return my_setenv(cmd, shell);
    if (strncmp(cmd[0], "unsetenv", 9) == 0)
        my_printf("unsetenv");
        //return my_unsetenv(shell, cmd);
    return 0;
}

int exec_cmd(my_shell *shell, char *cmd)
{
    char **cmd_line = my_str_to_word_array(cmd);

    if (check_cmd(cmd_line[0]))
        return do_cmd(cmd_line, shell);
    /*else if (check_slash(cmd_line[0]))
        return exec_slash(cmd_line shell);
    else*/
}