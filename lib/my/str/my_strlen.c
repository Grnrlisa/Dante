/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** str len
*/

#include "../../../solve_maze/include/my.h"

int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i]; i++);
    return i;
}
