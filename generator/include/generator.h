/*
** EPITECH PROJECT, 2021
** Generator
** File description:
** Header file
*/

#ifndef GENERATOR_H_
    #define GENERATOR_H_

    #include <unistd.h>
    #include <stdio.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <time.h>
    #include <string.h>
    #include <stdbool.h>
    #include <stdlib.h>

    typedef struct generator_struct {
        int height;
        int len;
        char **maze;
        int perfect_flag;
    } gen_t;

    void create_grid_map(gen_t *gen);
    int gest_errors(int argc, char **argv, gen_t *gen);
    void display_map(gen_t *gen);
    int isnum(char c);
    int my_strlen(char const *str);
    bool my_strcmp(char const *s1, char const *s2);

#endif/* !GENERATOR_H_ */
