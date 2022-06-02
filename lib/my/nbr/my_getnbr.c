/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** get the nbr
*/

#include "../../../solve_maze/include/my.h"

int pos_or_neg(char const *str)
{
    int index = 0;
    int j = 1;

    while (str[index] == '-' || str[index] == '+') {
        if (str[index] == '-') {
            j = (j * (-1));
            index++;
        }
        if (str[index] == '+') {
            j = (j * 1);
            index++;
        }
    }
    return (j);
}

int my_getnbr(char const *str)
{
    int index = 0;
    int k = 0;
    int j = 1;
    int res;
    int len;

    len = my_strlen(str);
    while (str[index]) {
        j = pos_or_neg(str);
        while (str[index] == '-' || str[index] == '+')
            index++;
        while (str[index] >= '0' && str[index] <= '9') {
            k = (k * 10) + (str[index] - '0');
            index++;
        }
        res = j * k;
        if (len > 10)
            return (0);
    }
    return (res);
}
