/*
** EPITECH PROJECT, 2021
** my_strlowcase.c
** File description:
** low cases
*/

#include "../../../solve_maze/include/my.h"

char *my_lowcase(char *str)
{
    for (int i = 0; str[i]; i++){
        if (str[i] >= 'A' && str[i] <= 'Z' )
            str[i] += ('a' - 'A');
    }
    return str;
}
