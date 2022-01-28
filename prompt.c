/*
** EPITECH PROJECT, 2021
** print example
** File description:
** example
*/

 #include "./lib/my/my.h"
 #include "./include/include"
 #include "./include/mysh.h"

int flags (struct_my_env *senv, char *str)
{
    if (my_strcmp(str, "cd") == 0) 
        printf("%s", "es cd");
        // name_function(senv, str);
    else if (my_strcmp(str, "env") == 0)
        printf("%s","es env");
        // name_function(senv, str);
    else if (my_strcmp(str, "setenv") == 0)
        printf("%s", "es setenv");
        // name_function(senv, str);
    else if (my_strcmp(str, "unsetenv") == 0)
        printf("%s", "es unsetenv");
        // name_function(senv, str);
    else
        my_putstr("command not found:");
        // my_putstr(str);

    return 0;
}

int prompt(struct_my_env *senv)
{
    char *str;
    size_t bufsize = 32;
    size_t characters;

    printf("%s","$>");

    str = (char *)malloc(bufsize * sizeof(char));
    if (str == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }
    characters = getline(&str, &bufsize,stdin);
    // printf("%zu characters were read.\n",characters);
    // printf("%s",str);
    flags(senv, str);

    return 0;
}
