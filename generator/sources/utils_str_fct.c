/*
** EPITECH PROJECT, 2021
** my_isnum
** File description:
** is it a num ????
*/

#include <generator.h>

int isnum(char c)
{
    return (c >= '0' && c <= '9');
}

bool my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] && s2[i]; i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

int my_strlen(char const *str)
{
    int i = 0;

    for (; *(str++); i++);
    return (i);
}
