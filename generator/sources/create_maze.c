/*
** EPITECH PROJECT, 2021
** dante
** File description:
** create grid
*/

#include "generator.h"

static void imperfect(gen_t *gen, int index, int y)
{
    for (int x = 0; x != gen->len; x++) {
        index = rand() % (gen->height * 2);
        if (index == 0)
            gen->maze[y][x] = '*';
        gen->maze[1][2] = '*';
        gen->maze[gen->height - 2][gen->len - 2] = '*';
    }
}

static void perfect(gen_t *gen, int index, int y)
{
    for (int x = 2; x != gen->len; x = x + 2) {
        index = rand() % 2;
        if (index == 1) {
            gen->maze[y][x - 1] = '*';
            gen->maze[y][x] = '*';
        } else if (index == 0) {
            gen->maze[y - 1][x] = '*';
            gen->maze[y][x] = '*';
        }
    }
}

static void generate_end(gen_t *gen)
{
    int index_bis = rand() % 2;

    if (index_bis == 0)
        gen->maze[gen->height - 1][gen->len - 2] = '*';
    else
        gen->maze[gen->height - 2][gen->len - 1] = '*';
}

static void create_maze(gen_t *gen, int index)
{
    for (int y = 2; y != gen->height; y = y + 2)
        perfect(gen, index, y);
    if (gen->perfect_flag == 0) {
        for (int y = 0; y != gen->height - 1; y++)
            imperfect(gen, index, y);
    }
    generate_end(gen);
    gen->maze[0][0] = '*';
    gen->maze[gen->height - 1][gen->len - 1] = '*';
}

void create_grid_map(gen_t *gen)
{
    int index = 0;

    gen->maze = malloc(sizeof(char *) * (gen->height + 1));
    for (int y = 0; y != gen->height; y++) {
        gen->maze[y] = malloc(sizeof(char) * (gen->len + 1));
        gen->maze[y][gen->len] = '\0';
    }
    gen->maze[gen->height] = NULL;
    for (int y = 0; y != gen->height; y++) {
        for (int x = 0; x != gen->len; x++)
            gen->maze[y][x] = 'X';
    }
    for (int x = 0; x < gen->len; x++)
        gen->maze[0][x] = '*';
    for (int y = 0; y < gen->height; y++)
        gen->maze[y][0] = '*';
    create_maze(gen, index);
}
