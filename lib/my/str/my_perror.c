/*
** EPITECH PROJECT, 2022
** my_perror.c
** File description:
** my perror
*/

#include "../../../solve_maze/include/my.h"

int my_perror(char *str)
{
    return (write(2, str, my_strlen(str)));
}
