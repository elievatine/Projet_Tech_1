NAME	=	my_screensaver

SRC	=	srcr/pixeldraw.c	\
		srcr/save1.c		\
		srcr/save2.c		\
		srcr/window.c		\

CC	= gcc -lc_graph_prog -g3 -Wall -Wextra -Werror

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
