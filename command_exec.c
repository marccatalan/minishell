/*
** EPITECH PROJECT, 2021
** print example
** File description:
** example
*/

#include "./lib/my/my.h"
 #include "./include/include"
 #include "./include/mysh.h"

int	cmd_exec(char **cmd, char **env) {
    pid_t pid;
    int	status = 0;

    pid = fork();
    if (pid < 0)
        my_printf("Forking failed !\n");
    if (pid != 0) {
        waitpid(pid, &status, 0);
        //check_status(status);
        return (status);
    } else {
        execve(cmd[0], cmd, env);
        my_printf("%s: Command not found.\n", cmd[0]);
    }
    return (84);
}