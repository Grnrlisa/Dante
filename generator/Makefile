##
## EPITECH PROJECT, 2021
## B-PSU-101-REN-1-1-minishell1
## File description:
## Minishell 1 makefile
##

## Sources of the prog

SRC	=	sources/main_fct.c 			\
		sources/gest_errors.c 		\
		sources/create_maze.c   	\
		sources/display_map.c  		\
		sources/utils_str_fct.c		\
		
OBJ = $(SRC:.c=.o)

NAME =	generator

INCLUDE = -I include/

## Compilation flags (auto pick-up)
CFLAGS = -Wall -W $(INCLUDE)

## Make commande
all:	$(OBJ) clean
	gcc -g -o $(NAME) $(SRC) $(INCLUDE)

## clean commande : rm files object
clean:
	rm -f $(OBJ)

## fclean commande : rm binary
fclean:
	rm -f $(NAME)
	make clean


## re commande : remake after cleaning
re:
	make fclean
	make all


.PHONY: clean, fclean, re, all