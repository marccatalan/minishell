#ifndef MINISHELL1_H_
# define MINISHELL1_H_

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdio.h>
# include <sys/stat.h>
#include <string.h>

typedef struct	struct_my_env
{
  char **envp;
  char **path;
} struct_my_env;

int main_error_handling(int argc, char **argv);
struct_my_env* environment(char **envp);

#endif