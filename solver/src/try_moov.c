/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** Dante
*/

#include "../include/solver.h"

void test_up(head_t *hhead, char **map)
{
    if (hhead->y > 0 && map[hhead->y - 1][hhead->x] == '*'){
        if (hhead->prev != NULL && hhead->prev->y == hhead->y - 1)
            return;
        hhead->up = new_moov(hhead);
        hhead->up->y = hhead->y - 1;
        hhead->up->x = hhead->x;
    }
}

void test_down(head_t *hhead, char **map)
{
    if (map[hhead->y] != NULL && map[hhead->y + 1] != NULL && map[hhead->y + 1][hhead->x] == '*') {
        if (hhead->prev != NULL && hhead->prev->y == hhead->y + 1)
            return;
        hhead->down = new_moov(hhead);
        hhead->down->y = hhead->y + 1;
        hhead->down->x = hhead->x;
    }
}

void test_left(head_t *hhead, char **map)
{
    if (hhead->x > 0 && map[hhead->y][hhead->x - 1] == '*'){
        if (hhead->prev != NULL && hhead->prev->x == hhead->x - 1)
            return;
        hhead->left = new_moov(hhead);
        hhead->left->x = hhead->x - 1;
        hhead->left->y = hhead->y;
    }
}

void test_right(head_t *hhead, char **map)
{
    if (map[0][hhead->x + 1] != '\0' && map[hhead->y][hhead->x + 1] == '*'){
        if (hhead->prev != NULL && hhead->prev->x == hhead->x + 1)
            return;
        hhead->right = new_moov(hhead);
        hhead->right->x = hhead->x + 1;
        hhead->right->y = hhead->y;
    }
}
