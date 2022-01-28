/*
** EPITECH PROJECT, 2021
** print example
** File description:
** example
*/

 #include "./lib/my/my.h"
 #include "./include/include"
 #include "./include/mysh.h"



struct_my_env* environment(char **envp) {
    struct_my_env *my_env;

    my_env = malloc(sizeof(struct_my_env));
    my_env->envp = copy_envp(envp);
    my_env->path = get_path(envp);
    return (my_env);
}