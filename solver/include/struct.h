/*
** EPITECH PROJECT, 2022
** struct.h
** File description:
** struct
*/

#include "struct_list.h"

#pragma once

typedef struct addres {
    int x;
    int y;
} adress_t;

typedef struct maze {
    char **map;
    int len_lines;
    int nbr_line;
} maze_t;

typedef struct head_solver {
    adress_t *adress;
    maze_t *checkpoint;
} head_solver_t;

typedef struct maze_solver {
    maze_t *stmaze;
    head_solver_t *sthead_solver;
} maze_solver_t;
