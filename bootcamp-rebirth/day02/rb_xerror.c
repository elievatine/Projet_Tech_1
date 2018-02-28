/*
** EPITECH PROJECT, 2017
** rb_xerror.c
** File description:
** swap 2 integrer content
*/

#include <unistd.h>
#include <stdlib.h>

void	my_putchar(char c);

void	my_putstr(char *c);

void	rb_print_err(char *c);

void	rb_xerror(char *c)
{
	rb_print_err("Error: ");
	rb_print_err(c);
	exit (84);
}
