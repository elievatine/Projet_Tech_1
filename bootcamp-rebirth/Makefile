##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC		=	./lib/my_putchar.c\
			./lib/my_putstr.c\
			./lib/my_strlen.c\
			./lib/rb_print_err.c\
			./lib/rb_xerror.c\
			./lib/my_swap.c\
			./lib/rb_putstr.c\
			./lib/count_words.c\
			./lib/rb_strlowcase.c\
			./lib/rb_strupcase.c\
			./lib/rb_strisinformat.c\
			./lib/rb_strlen.c\
			./lib/rb_strcmp.c\
			./lib/rb_strncmp.c

OBJ		=	$(SRC:.c=.o)

NAME	=	librb.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		mv librb.a ./lib

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f ./lib/librb.a

re:		fclean all

.PHONY:		all clean fclean re

