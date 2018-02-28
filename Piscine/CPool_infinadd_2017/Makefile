CC	=	gcc

CFLAGS	= -I../include -I. -W -Wall

SRC	=	*.c

OBJ = $(SRC:.c=.o)

NAME	=	infin_add

all: $(NAME)

$(NAME):	$(OBJ)
$(CC) -o $(NAME) $(CFLAGS) $(SRC)

test:	$(NAME)
	$(CC) -o $(TEST) $(TEST).c $(NAME).c $(NAME)_validation.c $(NAME)_check.c $(NAME)_npi.c $(CFLAGS)
	$(TEST)

clean: 
	rm -f $(OBJ)
	rm -f $(TEST).o

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST)

