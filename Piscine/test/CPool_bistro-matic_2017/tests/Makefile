##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Unit tests
##

SRC=		./tests_bistro1.c	\
		./tests_bistro2.c	\
		./tests_bistro3.c	\
		./tests_bistro4.c	\
		./tests_bistro5.c	\

OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -Wextra -I../include --coverage

UT_NAME=	units

all: 		(UT_NAME)

lib:
		make -C ../lib/my

$(UT_NAME):	lib $(OBJ)
		gcc -o $(UT_NAME) $(OBJ) -L ../lib -l my -l criterion -l gcov

clean:
		make clean -C ../lib/my
		rm -f $(OBJ)

fclean:		clean
		make fclean -C ../lib/my
		rm -f *.gcda *.gcno *.gcov
		rm -f ../*.gcda ../*.gcno ../*.gcov
		rm -f $(UT_NAME)

re:		fclean all

.PHONY:		lib all clean fclean re
