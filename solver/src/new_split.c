/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** Dante
*/

#include "../include/solver.h"

head_t *new_moov(head_t *previous)
{
    head_t *finder = malloc(sizeof(head_t));

    finder->x = 0;
    finder->y = 0;
    finder->down = NULL;
    finder->up = NULL;
    finder->right = NULL;
    finder->left = NULL;
    finder->prev = previous;
    return finder;
}
