/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** Dante
*/

#include "../include/solver.h"

void free_all_finder(head_t *to_free)
{
    if (to_free->down)
        free(to_free->down);
    if (to_free->up)
        free(to_free->up);
    if (to_free->right)
        free(to_free->right);
    if (to_free->left)
        free(to_free->left);
}

int all_try(head_t *finder, char **map)
{
    test_down(finder, map);
    find_all_moov(finder->down, map);
    free(finder->down);
    test_right(finder, map);
    find_all_moov(finder->right, map);
    free(finder->right);
    test_up(finder, map);
    find_all_moov(finder->up, map);
    free(finder->up);
    test_left(finder, map);
    find_all_moov(finder->left, map);
    free(finder->left);
    return 0;
}

bool test_in_find_all_moove(head_t *finder, char **map)
{
    return (map[finder->y + 1] == NULL && map[finder->y][finder->x + 1] == '\0');
}

void find_all_moov(head_t *finder, char **map)
{
    if (finder == NULL)
        return;
    if (test_in_find_all_moove(finder, map))
        solved(finder, map);
    all_try(finder, map);
}

void run(int ac, char **av)
{
    char **map;

    if (ac != 2)
        return;
    map = init_maze_core(ac, av);
    head_t *finder = new_moov(NULL);
    find_all_moov(finder, map);
    printf("no solution found");
}
