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
  char **envp;
  char **path;
} struct_my_env;

int main_error_handling(int argc, char **argv);
struct_my_env* environment(char **envp);
char	**str_to_tab(char *str, char sep);
int	tab_len(char **tab);
void env_output(void);
void tabprint(char **tab);
int	cmd_exec(char **cmd, char **env);
int	my_strprefix(char *s1, char *s2, int n);

#endif