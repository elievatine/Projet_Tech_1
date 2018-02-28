/*
** EPITECH PROJECT, 2017
** rb_strcmp.c
** File description:
** strcmp fonction
*/

#include <unistd.h>

void	rb_xerror(char *c);

int		rb_strcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
		rb_xerror("rb_strcmp : String pointer is NULL");
		
	while (*s1 == *s2 && *s1)
	{
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}
