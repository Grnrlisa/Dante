/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** strcopy
*/

#include "../../../solve_maze/include/my.h"

char *strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i]; i++){
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
