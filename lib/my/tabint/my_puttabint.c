/*
** EPITECH PROJECT, 2021
** my_puttabint.c
** File description:
** my_puttabint
*/

#include "../../../solve_maze/include/my.h"

int print_tabint(int *t, int size)
{
    for (int i = 0; i < size; i++) {
        my_put_nbr(t[i]);
        (i + 1 != size) ? my_putchar(' ') : true;
    }
    return 1;
}
