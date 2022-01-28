/*
** EPITECH PROJECT, 2021
** print example
** File description:
** example
*/

 #include "./lib/my/my.h"
 #include "./include/include"
 #include "./include/mysh.h"

int	tablen(char **tab)
{
  int i;

  i = -1;
  while (tab[++i] != NULL);
  return (i);
}

char **copy_envp(char **old_env) {

    int i;
    char **new_env = malloc(sizeof(char*) * (tablen(old_env) + 1));

    if (new_env == NULL)
        return (NULL);
    for (i = 0; old_env[i] != NULL; i++) {
        new_env[i] = malloc(sizeof(char) * (my_strlen(old_env[i]) + 1));
        if (new_env[i] == NULL)
            return (NULL);
        my_strcpy(new_env[i], old_env[i]);
    }
    new_env[i] = NULL;
    return (new_env);
}

struct_my_env* environment(char **envp) {
    struct_my_env *my_env;

    my_env = malloc(sizeof(struct_my_env));
    my_env->envp = copy_envp(envp);
    //my_env->path = get_path(envp);
    return (my_env);
}