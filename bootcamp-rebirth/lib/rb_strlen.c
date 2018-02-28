/*
** EPITECH PROJECT, 2017
** rb_strlen.c
** File description:
** swap 2 integrer content
*/

#include <unistd.h>

int		my_strlen(char *c);

void	rb_xerror(char *c);

int		rb_strlen(char *str)
{
	if (str == NULL)
		rb_xerror("rb_strlen: String pointer is NULL");
	else
		my_strlen(str);
}
