##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Unit tests
##

SRC=		./tests_bistro1.c	\
		../	\
		../src/add_util.c	\
		../src/division.c	\
		../src/evalexpr.c	\
		../src/infinadd.c	\
		../src/main.c	\
		../src/my_atoi.c	\
		../src/my_get_char.c	\
		../src/my_strcmp.c	\
		../src/number.c	\
		../src/operator.c	\
		../src/tokenizer.c	\
		../src/util.c	\

OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -Wextra -l criterion -I../include --coverage

UT_NAME=	units

all: 		$(UT_NAME)

lib:
		make -C ../

$(UT_NAME):	lib $(OBJ)
		gcc -o $(UT_NAME) -l criterion $(OBJ) -L ../src/main.c -l my -l gcov

clean:
		make clean -C ../src/main.c
		rm -f $(OBJ)

fclean:		clean
		make fclean -C ../src/main.c
		rm -f *.gcda *.gcno *.gcov
		rm -f ../*.gcda ../*.gcno ../*.gcov
		rm -f $(UT_NAME)

re:		fclean all

.PHONY:		lib all clean fclean re
