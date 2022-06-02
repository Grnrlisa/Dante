##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## make the file
##

all:
	make -C generator/
	make -C solver/

clean:
	make clean -C generator/
	make clean -C solver/

fclean:	clean
	make fclean -C generator/
	make fclean -C solver/

re: fclean all
