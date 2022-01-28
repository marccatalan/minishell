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
    printf("%s", str);
    // switch(str)
    // {
    //     case "cd":
    //         printf("%s", "es cd");
    //         break;
    //     case "env":
    //         printf("%s", "es env");
    //         break;
    //     case "setenv":
    //         printf("%s", "es setenv");
    //         break;
    //     case "unsetenv":
    //         printf("%s", "es unsetenv");
    //         break;
    // }

    if (strcmp(str, "cd") == 0) 
        printf("%s", "es cd");
    else
        printf("%s", "no es cd");
        
    // cd
    // env no more arguments
    // setenv
    // unsetenv can be *
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
    printf("%s",str);
    flags(senv, str);
}