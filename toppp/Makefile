NAME	=	my_screensaver

SRC	=	srcr/pixeldraw.c	\
		srcr/save1.c		\
		srcr/save2.c		\
		srcr/save3.c		\
		srcr/main.c		\
		srcr/window.c		\
		srcr/printerror.c

CC	= gcc -lc_graph_prog -g3 -Wall -Wextra

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
