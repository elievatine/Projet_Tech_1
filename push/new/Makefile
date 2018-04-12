CC	=	gcc -g3

NAME	=	mysh

SRC		=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

CPPFLAGS = -I./include

Libs = libs/libgnl.a

all:		$(NAME) clean

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -Llibs -lgnl

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
