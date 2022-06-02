/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** strcmp
*/

#include "../../../solve_maze/include/my.h"

bool my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
