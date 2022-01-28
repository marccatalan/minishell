#ifndef MINISHELL1_H_
# define MINISHELL1_H_

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdio.h>
# include <sys/stat.h>

typedef struct	struct_my_env
{
  char **env;
  char **path;
} struct_my_env;

#endif