/*
** EPITECH PROJECT, 2021
** my_str_isalpha.c
** File description:
** str isalpha
*/

#include "../../../solve_maze/include/my.h"

bool test_maj(char c)
{
    if (c >= 'A' && c <= 'Z')
        return true;
    return false;
}

bool test_min(char c)
{
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++){
        if (!test_maj(str[i]) && !test_min(str[i]))
            return false;
    }
    return true;
}
