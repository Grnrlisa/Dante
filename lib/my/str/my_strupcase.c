/*
** EPITECH PROJECT, 2021
** my_strupcase.c
** File description:
** upcase
*/

#include "../../../solve_maze/include/my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++){
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a' - 'A';
    }
    return str;
}
