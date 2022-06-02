/*
** EPITECH PROJECT, 2022
** my_malloc-tab;c
** File description:
** my_malloc tab
*/

#include "../../../solve_maze/include/my.h"

char **my_malloc_tab(int x, int y)
{
    char **res = malloc(sizeof(char *) * (x + 1));
    int i = 0;

    for (; i < x; i++) {
        res[i] = malloc(sizeof(char) * (y + 1));
    }
    res[i] = NULL;
    return res;
}
