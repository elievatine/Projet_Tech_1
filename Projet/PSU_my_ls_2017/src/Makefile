CC	=	gcc

NAME	=	test_ls

SRC	=	my_printf.c			\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c			\
		my_put_nbr_base.c	\
		try.c		\

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
