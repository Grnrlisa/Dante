##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make the file
##

NAME = solver

SRC = $(wildcard ./src/*.c)

OBJ = $(SRC:.c=.o)

INCLUDE = -I ../lib/include/

LDFLAGS = -L ../lib/my -lmy

CFLAGS	=	-g -W -Wall $(INCLUDE) $(LDFLAGS)

$(NAME):	$(OBJ)
			make -C ../lib/my/
			gcc $(OBJ) -o $(NAME) $(CFLAGS)

all:	$(NAME)

clean:
	make clean -C ../lib/my/
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ../lib/my
	rm -f $(NAME)

re:	fclean all

debug: CFLAGS += -g
