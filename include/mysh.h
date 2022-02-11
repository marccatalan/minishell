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
int strncmp(char *s1, char *s2, int n);
int print_env(char **str, my_shell *shell);

#endif