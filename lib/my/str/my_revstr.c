/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** rev the str
*/

#include "../../../solve_maze/include/my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int y = len - 1;
    char temp;

    for (int i = 0; i <= len / 2; i++){
        temp = str[y];
        str[y] = str[i];
        str[i] = temp;
        y--;
    }
    return str;
}
