CC	=	gcc

NAME	=	bsq

SRC =	src/my_putstr.c	\
		src/main.c		\
		src/switch.c

CFALGS += -W -Wall -Wextra -Werror

OBJ	=	$(SRC:.c=.o)


all:		$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
