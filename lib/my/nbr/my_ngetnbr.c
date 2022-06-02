/*
** EPITECH PROJECT, 2021
** my_ngetnbr.c
** File description:
** my_ngetnbr
*/

#include "../../../solve_maze/include/my.h"

int my_ngetnbr(char const *str, int n)
{
    int index = n;
    int k = 0;
    int j = 1;
    int res;
    int len;

    len = my_strlen(str);
    if (j > len){
        return 0;
    }
    if (index > 1 && str[index - 1] == '-' &&
    str[index - 2] <= '0' && str[index - 2] >= '9'){
        j *= -1;
    }
    while (str[index] >= '0' && str[index] <= '9') {
        k = (k * 10) + (str[index] - '0');
        index++;
    }
    res = k * j;
    return (res);
}
