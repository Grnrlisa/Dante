/*
** EPITECH PROJECT, 2021
** dante
** File description:
** main fct
*/

#include "generator.h"

int gest_errors(int argc, char **argv, gen_t *gen)
{
    if (argc < 3)
        return (84);
    for (int i = 0; i != my_strlen(argv[1]); i++) {
        if (isnum(argv[1][i]) != 1)
            return (84);
    }
    for (int i = 0; i != my_strlen(argv[2]); i++) {
        if (isnum(argv[2][i]) != 1)
            return (84);
    }
    if ((strlen(argv[1]) == 1 && argv[1][0] == '0') ||
    (strlen(argv[2]) == 1 && argv[2][0] == '0'))
        return (84);
    if (argc == 4 && my_strcmp(argv[3], "perfect") == 1)
        gen->perfect_flag = 1;
    return (0);
}
