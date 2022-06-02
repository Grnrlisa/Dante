/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** Dante
*/

#include "../include/solver.h"

void print_map(char **map)
{
    int i = 0;

    for (i = 0; map[i + 1]; i++)
        printf("%s\n", map[i]);
    printf("%s", map[i]);
}
