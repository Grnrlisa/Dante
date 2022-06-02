/*
** EPITECH PROJECT, 2022
** decode.c
** File description:
** decode
*/

#include "../../../solve_maze/include/my.h"

int decode(char c, int i)
{
    c = c >> i;
    c = c & 1;
    return my_printf("%o\n", c);
}
