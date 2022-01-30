/*
** EPITECH PROJECT, 2021
** print example
** File description:
** example
*/

 #include "./lib/my/my.h"
 #include "./include/include"
 #include "./include/mysh.h"

int	env_len(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; i++);
    return (i);
}

int	my_strprefix(char *s1, char *s2, int n)
{
    int i;

    for (i = 0; s1[i] && s2[i] && s1[i] == s2[i] && (i < n || n < 0); i++) {
        printf("%s\n %s\n %d\n %d\n\n\n", s1, s2, n, i);
    }
    return (i);
}

int	find_var(char **env, char *var)
{
    int i = 0;

    while (env[i++] != NULL) {
        if (my_strprefix(env[i], var, my_strlen(var)) == 5)
            return (i);
        }
    return (-1);
}

char **get_path(char **env) {
    int	id;
    char **path;
    char **tmp;

    id = find_var(env, "PATH=");
    //printf("%d\n", id);
}

char **copy_envp(char **old_env) {

    int i;
    char **new_env = malloc(sizeof(char*) * (env_len(old_env) + 1));

    if (new_env == NULL)
        return (NULL);
    for (i = 0; old_env[i] != NULL; i++) {
        new_env[i] = malloc(sizeof(char) * (my_strlen(old_env[i]) + 1));
        if (new_env[i] == NULL)
            return (NULL);
        my_strcpy(new_env[i], old_env[i]);
        // printf("%s\n", new_env[i]);
    }
    new_env[i] = NULL;
    return (new_env);
}

struct_my_env* environment(char **envp) {
    struct_my_env *my_env;

    my_env = malloc(sizeof(struct_my_env));
    my_env->envp = copy_envp(envp);
    my_env->path = get_path(envp);
    return (my_env);
}