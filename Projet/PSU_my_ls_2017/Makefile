CC	=	gcc

NAME	=	my_ls

SRC	=	src/my_printf.c			\
		src/my_putchar.c		\
		src/my_put_nbr.c		\
		src/my_putstr.c			\
		src/my_put_nbr_base.c	\
		src/myls.c

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
