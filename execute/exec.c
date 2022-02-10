/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main with structure
*/

#include "../lib/my/my.h"
#include "../include/mysh.h"

int exec_command(char *cmd, char **buffer, char **envp)
{
    int error = 0;
    int status = 0;
    pid_t pid = fork();

    if (pid != 0) {
        wait(&error);
        return (get_segfault(error));
    } else {
        if (execve(cmd, buffer, envp) == -1) {
            status = exec_error(buffer[0]);
            exit(status);
            return status;
        }
        exit(0);
    }
    return status;
}

int prepare_command(my_shell *shell, char **cmd_line)
{
    char *cmd = get_cmd_path(cmd_line[0], shell);

    if (cmd)
        return exec_command(cmd, cmd_line, shell->envp);
    else
        return command_not_found(cmd_line[0]);
    return 0;
}

int exec_cmd(my_shell *shell, char *cmd)
{
    char **cmd_line = my_str_to_word_array(cmd);

    if (check_cmd(cmd_line[0]))
        return do_cmd(cmd_line, shell);
    else if (check_slash(cmd_line[0]))
        return exec_slash(cmd_line, shell);
    else
        return prepare_command(shell, cmd_line);
}