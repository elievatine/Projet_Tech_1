/*
** EPITECH PROJECT, 2017
** rb_print_err.c
** File description:
** swap 2 integrer content
*/

#include <unistd.h>
#include "../include/incl.h"

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

void my_putstr(char const *str)
{
	write(0, str, my_strlen(str));
}

void	rb_print_err(char *c)
{
	write(2, c, my_strlen(c));
}

int	rb_xerror(char *c)
{
	rb_print_err("\e[33mError: ");
	rb_print_err(c);
	return (84);
}
