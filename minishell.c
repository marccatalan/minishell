/*
** EPITECH PROJECT, 2022
** minishell.c
** File description:
** structure init and loop
*/

 #include "./lib/my/my.h"
 #include "./include/mysh.h"

int check_spaces(char *cmd)
{
    int len = my_strlen(cmd);
    int result = 0;

    for (int i = 0; i != len; i++) {
        if (cmd[i] == ' ')
            result++;
    }
    if (result != len - 1)
        return 0;
    return 1;
}

int commands(my_shell *shell)
{
    char *cmd = NULL;
    size_t len = 2048;
    int x = 0;
    static int status = 0;
    
    if (isatty(STDIN_FILENO))
        my_putstr("$ > ");
    x = getline(&cmd, &len, stdin);
    if (cmd && cmd[0] != '\0' && cmd[0] != '\n'
    && check_spaces(cmd) == 0) {
        status = exec_cmd(shell, cmd);
        return status;
    }
    if (x == -1 && !isatty(0))
        exit(status);
    else if (x == -1 && isatty(0))
        my_exit(status);
    else
        commands(shell);
    return 0;
}

my_shell *minishell_struct(char **envp)
{
    my_shell *shell = malloc(sizeof(my_shell));

    shell->path = get_env_line("PATH=", envp);
    shell->path_parse = path_to_word_array(shell->path+5);
    shell->envp = envp;
    return shell;
}

 int minishell(char **envp)
 {
    my_shell *shell = minishell_struct(envp);
    int environment = 0;

    while (1) {
        environment = commands(shell);
    }
    return 0;
 }

