/*
** EPITECH PROJECT, 2021
** my_putfloat.c
** File description:
** print float
*/

#include "../../../solve_maze/include/my.h"

int my_putfloat(float nb, int nafcoma)
{
    int res = (int)nb;
    int dec = 0;

    my_put_nbr(res);
    if (nafcoma == 0)
        return 0;
    my_putchar('.');
    nb -= res;
    for (int i = 0; i < nafcoma; i++) {
        nb *= 10;
        dec = (int)nb % 10;
        my_put_nbr(dec);
    }
    return 1;
}
