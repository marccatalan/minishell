/*
** EPITECH PROJECT, 2022
** exit.c
** File description:
** custom exit function for minishell
*/

#include "./lib/my/my.h"
#include "./include/mysh.h"

void my_exit(int status)
{
    my_putstr(" Exiting\n");
    exit(status);
}