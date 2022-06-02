/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swap
*/

#include "../../../solve_maze/include/my.h"

int my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
    return 1;
}
