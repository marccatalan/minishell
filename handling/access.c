/*
** EPITECH PROJECT, 2022
** env_lines.c
** File description:
** searches for specific lines in a given position
*/

#include "../lib/my/my.h"
#include "../include/mysh.h"

int count_path_args(char **path_line)
{
    int i;

    for (i = 0; path_line[i] != '\0'; i++);
    return (i);
}

char *give_path(char *path_line, char *entry)
{
    char *result = NULL;

    if (path_line == NULL || entry == NULL)
        return NULL;
    result = my_strcat(path_line, "/");
    result = my_strcat(result, entry);
    return result;
}

char *get_cmd_path(char *cmd, my_shell *shell)
{
    char *result = NULL;
    int i = 0;
    int success = 0;

    while (success == 0 && i <= count_path_args(shell->path_parse) - 1) {
        result = give_path(shell->path_parse[i]+5, cmd);
        if (access(result, 1) != -1)
            success = 1;
        else {
            success = 0;
        }
        i++;
    }
    if (success == 0) {
        free(result);
        return NULL;
    }
    else
        return result;
}