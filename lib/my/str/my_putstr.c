/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** print str
*/

#include "../../../solve_maze/include/my.h"

int my_putstr(char const *str)
{
    return (write(1, str, my_strlen(str)));
}
