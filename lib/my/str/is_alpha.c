/*
** EPITECH PROJECT, 2022
** is alpha.c
** File description:
** is alpha
*/

#include "../../../solve_maze/include/my.h"

bool test_alpha(char c)
{
    if (c >= 'a' && c <= 'z') {
        return true;
    } if (c >= 'A' && c <= 'Z') {
        return true;
    } if (c >= '1' && c <= '9') {
        return true;
    } if (c == '_') {
        return true;
    } {
        return false;
    }
}
