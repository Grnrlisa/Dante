/*
** EPITECH PROJECT, 2022
** put_buff_in_tab.c
** File description:
** put the buff in a tab
*/

#include "../include/solver.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; *(str++); i++);
    return (i);
}

char **fill_array(char const *str, char **ret)
{
    int nb = 0;

    for (int i = 0, ii = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == '\0') {
            ii++;
            nb = 0;
        } else {
            ret[ii][nb] = str[i];
            nb++;
        }
    }
    return ret;
}

char **my_str_twa(char const *str)
{
    int len = my_strlen(str);
    char **ret;
    int nb_word = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == '\n' || str[i] == '\0')
            nb_word++;
    }
    ret = malloc(sizeof(char *) * (nb_word + 2));
    ret[nb_word + 1] = NULL;
    for (int i = 0, ii = 0, nb = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i + 1] == '\0') {
            ret[nb] = malloc(sizeof(char) * (ii + 2));
            nb++;
            ii = 0;
        } else {
            ii++;
        }
    }
    return fill_array(str, ret);
}
