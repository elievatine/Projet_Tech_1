/*
** EPITECH PROJECT, 2017
** rb_print_err.c
** File description:
** swap 2 integrer content
*/

#include <unistd.h>

int		my_strlen(char *c);

void	rb_print_err(char *c)
{
	write(2, c, my_strlen(c));
}
