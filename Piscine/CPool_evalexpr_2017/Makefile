##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## alexandre.frydman@epitech.eu
##

NAME	=	eval

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -c *.c
	ar rc libmy.a *.o
	gcc eval_expr.c -L. -lmy -Wall -Wextra -Werror --std=c99
	rm *.o
	rm libmy.a

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
