##
## EPITECH PROJECT, 2017
## Library Makefile
## File description:
## task01
##

SRC=		./main.c 		\
		./pattern_recon.c	\
		./tools.c		\
		./pattern_recon_size.c

OBJ=		$(SRC:.c=.o)

NAME=		rush3

CFLAGS=		-L ../lib -l my

all:		$(NAME)

lib:
		make -C ../lib/my

$(NAME):	lib $(OBJ)
		gcc -Wall -Wextra -o $(NAME) $(OBJ) $(CFLAGS) -l gcov

test:
		make -C ../tests

clean:
		make clean -C ../lib/my
		rm -f $(OBJ)

fclean:		clean
		make fclean -C ../lib/my
		rm -f $(NAME)

re:		fclean all

.PHONY:		lib all clean fclean re
