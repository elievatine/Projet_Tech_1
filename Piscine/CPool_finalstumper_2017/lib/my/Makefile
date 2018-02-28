##
## EPITECH PROJECT, 2017
## Library Makefile
## File description:
## task01
##

SRC=		./my_putchar.c	\
		./my_putstr.c	\
		./my_strlen.c	\
		./my_put_nbr.c

OBJ=		$(SRC:.c=.o)

LIB_NAME=	libmy.a

all:		$(LIB_NAME)

$(LIB_NAME):	$(OBJ)
		ar rc $(LIB_NAME) $(OBJ)
		cp $(LIB_NAME) ..
		cp my.h ../../include/

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(LIB_NAME)
		rm -f ../libmy.a

re:		fclean all

.PHONY:		all fclean fclean re
