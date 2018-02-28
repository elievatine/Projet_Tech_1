##
## EPITECH PROJECT, 2017
## Library Makefile
## File description:
## task01
##

SRC=		./tests_rush_1_1.c	\
		./tests_rush_1_2.c	\
		./tests_rush_1_3.c	\
		./tests_rush_1_4.c	\
		./tests_rush_1_5.c	\
		./tests_finalstumper_errors.c \
		../pattern_recon.c	\
		../tools.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -Wextra -I../include --coverage

UT_NAME=	units

all: 		$(UT_NAME)

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
