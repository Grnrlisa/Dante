/*
** EPITECH PROJECT, 2022
** put_nbr_base.c
** File description:
** put nbr with base
*/

#include "../../../solve_maze/include/my.h"

int print_nbr_base(int nb, int base)
{
    int i = 0;
    int r = 0;
    const char *tab_base = "0123456789abcdef";
    char res[100] = "0";

    while (nb > 0) {
        r = nb % base;
        res[i++] = tab_base[r];
        nb /= base;
    }
    res[i] = '\0';
    my_revstr(res);
    my_putstr(res);
    return 1;
}
