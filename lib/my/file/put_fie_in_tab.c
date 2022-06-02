/*
** EPITECH PROJECT, 2022
** put_buff_in_tab.c
** File description:
** put the buff in a tab
*/

#include "../../../solve_maze/include/my.h"

int tabb_get_nbr_line(char **tab)
{
    int res = 0;
    for (; tab[res]; res++);
    return res;
}

int tabb_get_nbr_row(char **tab)
{
    int res = 0;
    for (int x = 0; tab[x][res]; res++);
    return res;
}

int buff_get_br_line(char *buff)
{
    int res = 0;

    for (int i = 0; buff[i]; i++) {
        if (buff[i] == '\n') {
            res++;
        }
    }
    return res;
}

int buff_get_nbr_row(char *buff)
{
    for (int res = 0; buff[res]; res++) {
        if (buff[res] == '\n') {
            return res;
        }
    }
    return (-1);
}

char **put_buff_in_tab(char *buff)
{
    char **tab = my_malloc_tab(buff_get_br_line(buff), buff_get_nbr_row(buff));
    int x = 0;
    int y = 0;

    for (int i = 0; buff[i] != '\0'; i++) {
        if (buff[i] == LINE_BREAK) {
            tab[x][y] = '\0';
            x++;
            y = 0;
        } else {
            tab[x][y] = buff[i];
            y++;
        }
    }
    return tab;
}
