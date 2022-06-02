/*
** EPITECH PROJECT, 2021
** dante
** File description:
** display map
*/

#include "generator.h"

void display_map(gen_t *gen)
{
    for (int i = 0; gen->maze[i] != NULL; i++) {
        if (i != gen->height - 1)
            printf("%s\n", gen->maze[i]);
        else
            printf("%s", gen->maze[i]);
    }
}
