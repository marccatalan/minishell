/*
** EPITECH PROJECT, 2021
** print example
** File description:
** example
*/

 #include "./lib/my/my.h"
 #include "./include/include"
 #include "./include/mysh.h"
 #include <stdio.h>

void prompt(struct_my_env *senv);

int main(int argc, char **argv, char **envp)
{
    struct_my_env *my_env;

    if (main_error_handling(argc, argv) == 84)
      return 84;
    my_env = environment(envp);
    prompt(my_env);
    return 0;
}
