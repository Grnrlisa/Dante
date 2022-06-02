/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** Dante
*/

#pragma once
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct head{
    int x;
    int y;
    struct head *up;
    struct head *down;
    struct head *left;
    struct head *right;
    struct head *prev;
} head_t;

head_t *new_moov(head_t *previous);
char **init_maze_core(int ac, char **av);
void find_all_moov(head_t *finder, char **map);
void run(int ac, char **av);
void print_map(char **map);
void test_up(head_t *finder, char **map);
void test_down(head_t *finder, char **map);
void test_left(head_t *finder, char **map);
void test_right(head_t *finder, char **map);
char **my_malloc_tab(int x, int y);
char **put_buff_in_tab(char *buff);
char *init_buff(char *fp);
void solved(head_t *finder, char **map);
