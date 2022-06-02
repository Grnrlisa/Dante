/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <ncurses.h>
#include <time.h>

#include "struct.h"

#pragma once

    #define WALL '#'
    #define BOX 'X'
    #define PORT 'O'
    #define PLAYER 'P'
    #define LINE_BREAK '\n'
    #define ERROR 84

//-=-=-=-=-=-=-=-=-=-=-printf-=-=-=-=-=-=-=-=-=-=
int my_printf(char *str, ...);
//-=-=-=-=-=-=-=-=-=-=-nbr-=-=-=-=-=-=-=-=-=-=
int my_getnbr(char const *str);
int my_isneg(int n);
int my_ngetnbr(char const *str, int n);
int my_put_nbr(int nb);
int my_putfloat(float nb, int nafcoma);
int print_nbr_base(int nb, int base);
//-=-=-=-=-=-=-=-=-=-=-str-=-=-=-=-=-=-=-=-=-=
char *my_evil_str(char *str);
int my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_str_isalpha(char const *str);
bool my_strcmp(char const *s1, char const *s2);
char *strcpy(char *dest, char const *src);
int my_strlen(char const *str);
int my_perror(char *str);
char *my_lowcase(char *str);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strupcase(char *str);
int my_swap(int *a, int *b);
bool test_alpha(char c);
//-=-=-=-=-=-=-=-=-=-=-tabb-=-=-=-=-=-=-=-=-=-=
char **str_to_array(char *str);
int print_tabb(char **tab);
char **my_malloc_tab(int max_x, int max_y);
//-=-=-=-=-=-=-=-=-=-=-tabint-=-=-=-=-=-=-=-=-=-=
int print_tabint(int *t, int size);
//-=-=-=-=-=-=-=-=-=-=-mem-=-=-=-=-=-=-=-=-=-=
int decode(char c, int i);
//-=-=-=-=-=-=-=-=-=-=-file-=-=-=-=-=-=-=-=-=-=
char **put_file_in_tab(char *fp);
char **put_buff_in_tab(char *buff);
char *init_buff(char *fp);
char **put_buff_in_tab(char *buff);
void print_screen(maze_t *game);
maze_t *init_game();
