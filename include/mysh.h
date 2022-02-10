#ifndef MINISHELL1_H_
# define MINISHELL1_H_

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdio.h>
# include <sys/stat.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>

typedef struct shell
{
    char **envp;
    char **path;
    char **path_parse;
    pid_t pid;
} my_shell;

int minishell(char **envp);
char *get_env_line(char *line, char **envp);
int find_line(char *line, char **envp);
char **path_to_word_array(char *path_line);
char **malloc_path(char *str);
int count_path_lines(char *line);
int commands(my_shell *shell);
int check_spaces(char *cmd);
void my_exit(int status);
int exec_slash(char **cmd, my_shell *shell);
bool check_slash(char *cmd);
int exec_cmd(my_shell *shell, char *cmd);
bool check_cmd(char *cmd);
int do_cmd(char **cmd, my_shell *shell);
int prepare_command(my_shell *shell, char **parsed_cmd);
int exec_command(char *cmd, char **buffer, char **env);
int exec_error(char *cmd);
int get_segfault(int segfault);
int command_not_found(char *cmd);

#endif