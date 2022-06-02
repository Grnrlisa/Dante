/*
** EPITECH PROJECT, 2021
** my_evil_str.c
** File description:
** evil str
*/

#include "../../../solve_maze/include/my.h"

char *my_evil_str(char *str)
{
    char temp;
    int j = my_strlen(str);

    if (j == 1){
        return str;
    } else if (j == 0)
        return 0;
    j--;
    for (int i = 0; i < j; i++){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j--;
    }
    return str;
}
