/*
** EPITECH PROJECT, 2022
** init_game_core
** File description:
** init_maze_core.c
*/

#include "../include/solver.h"

char **init_maze_core(int ac, char **av)
{
    return my_str_twa(init_buff(av[1]));
}
