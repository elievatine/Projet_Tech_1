/*
** EPITECH PROJECT, 2017
** rb_putstr.c
** File description:
** swap 2 integrer content
*/

#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *c);

void	rb_xerror(char *c);

void	rb_putstr(char *str)
{
	if (str == NULL)
		rb_xerror("rb_putstr: String pointer is NULL\n");
	else
		my_putstr(str);
}
