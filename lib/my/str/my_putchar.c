/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** putchar
*/

#include "../../../solve_maze/include/my.h"

int my_putchar(char c)
{
    return (write(1, &c,  1));
}
