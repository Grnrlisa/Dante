/*
** EPITECH PROJECT, 2021
** struct_list.h
** File description:
** struct for list
*/

#pragma once

typedef struct node
{
    int elem;
    char *word;
    struct node *next;
} node_t;

typedef struct list
{
    node_t *first;
}list_t;
