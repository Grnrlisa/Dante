/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** Dante
*/

#include "../include/solver.h"

void solved(head_t *finder, char **map)
{
    head_t *temp_free = finder;
    while (finder->prev){
        map[finder->y][finder->x] = 'o';
        finder = finder->prev;
        free(temp_free);
        temp_free = finder;
    }
    map[0][0] = 'o';
    print_map(map);
    exit(0);
}
