/*
** EPITECH PROJECT, 2022
** print_tabb.c
** File description:
** print char **
*/

#include "../../../solve_maze/include/my.h"

int print_tabb(char **tab)
{
    if (tab == NULL) {
        my_printf("\n");
        return 0;
    }
    for (int x = 0; tab[x]; x++) {
        my_printf("%s\n", tab[x]);
    }
    return 1;
}
