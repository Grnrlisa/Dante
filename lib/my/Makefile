##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make the file
##

SRC = $(wildcard ./src/*.c)

OBJ =	$(SRC:.c=.o)

CFLAGS	=	-I include/ -g

NAME =	libmy.a

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all
