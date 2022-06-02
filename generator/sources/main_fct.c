/*
** EPITECH PROJECT, 2021
** dante
** File description:
** main fct
*/

#include "generator.h"

int main(int argc, char **argv)
{
    gen_t *gen = malloc(sizeof(gen_t));
    gen->perfect_flag = 0;
    time_t t;
    srand(time(&t));

    if (gest_errors(argc, argv, gen) == 84)
        return (84);
    gen->height = atoi(argv[2]);
    gen->len = atoi(argv[1]);
    gen->maze = NULL;
    create_grid_map(gen);
    display_map(gen);
    return (0);
}
