/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** printf.c
*/

#include "../../../solve_maze/include/my.h"

void print_base(va_list list, char arg)
{
    if (arg == 'p'){
        my_putchar('@');
        print_nbr_base(va_arg(list, int), 16);
    }
    (arg == 'x') ? print_nbr_base(va_arg(list, int), 16) : true;
    (arg == 'o') ? print_nbr_base(va_arg(list, int), 8) : true;
    (arg == 'b') ? print_nbr_base(va_arg(list, int), 2) : true;
}

char simple_print(va_list list, char arg)
{
    (arg == 's') ? my_putstr(va_arg(list, char *)) : true;
    (arg == 'c') ? my_putchar(va_arg(list, int)) : true;
    (arg == 'i' || arg == 'd') ? my_put_nbr(va_arg(list, int)) : true;
    (arg == '%') ? my_putchar('%') : true;
    (arg == 'f') ? my_putfloat(va_arg(list, int), 2) : true;
    print_base(list, arg);
}

int my_printf(char *str, ...)
{
    va_list args;

    va_start(args, str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            i++;
            simple_print(args, str[i]);
        } else
            my_putchar(str[i]);
    }
    va_end(args);
    return 1;
}
