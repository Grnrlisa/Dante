/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** str n copy
*/

#include "../../../solve_maze/include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n; i++){
        dest[i] = src[i];
    }
    i++;
    (n > my_strlen(src)) ? dest[i] = '\0' : true;
    return dest;
}
