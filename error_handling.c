/*
** EPITECH PROJECT, 2021
** error_handling.c
** File description:
** searchs for errors
*/

#include "./lib/my/my.h"
#include "./include/include"
#include "./include/mysh.h"

int main_error_handling(int argc, char **argv) {
    if (argc > 1)
        return 84;
    if (argv[1] != NULL)
        return 84;
    return 0;
}