##
## EPITECH PROJECT, 2017
## bistro-matic
## File description:
## calculatrice qui gere les nombres infinis
##

NAME	=	calc

SRC	=	src/main.c		\
		src/util.c		\
		src/my_atoi.c		\
		src/evalexpr.c		\
		src/operator.c		\
		src/my_get_char.c	\
		src/number.c		\
		src/tokenizer.c		\
		src/infinadd.c		\
		src/add_util.c		\
		src/add_sub.c		\
		src/division.c		\
		src/my_strcmp.c		\
		src/signs_and_brackets.c\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -g3

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
