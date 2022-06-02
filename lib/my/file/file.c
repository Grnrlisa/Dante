/*
** EPITECH PROJECT, 2022
** file.c
** File description:
** file . c
*/

#include "../../../solve_maze/include/my.h"

char *init_buff(char *fp)
{
    char *buff = NULL;
    int inft = 0;

    struct stat ststat;
    stat(fp, &ststat);
    buff = malloc(sizeof(char) * (ststat.st_size + 1));
    inft = open(fp, O_RDONLY);
    if (inft == -1)
        return NULL;
    read(inft, buff, ststat.st_size);
    buff[ststat.st_size] = '\0';
    close(inft);
    return buff;
}
