/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** putnbr
*/

#include "../../../solve_maze/include/my.h"

int error(int nb)
{
    if (nb <= -2147483648 || nb >= 2147483647) {
        if (nb == -2147483648)
            write (1, "-2147483648", 12);
        if (nb == 2147483647)
            write (1, "2147483647", 11);
        return (1);
    }
    return (0);
}

int my_put_nbr_next(int nb)
{
    if (nb >= 0 && nb <= 9) {
        my_putchar(nb + 48);
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (nb);
}

int my_put_nbr(int nb)
{
    int a = 0;

    a = error(nb);
    if (a == 1)
        return (0);
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
    }
    if (nb >= 0)
        nb = my_put_nbr_next(nb);
    return (0);
}
