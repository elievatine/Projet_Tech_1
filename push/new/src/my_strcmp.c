/*
** EPITECH PROJECT, 2017
** rb_strcmp.c
** File description:
** strcmp fonction
*/

#include <unistd.h>

int		my_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s2++;
		s1++;
	}
	return (*s1 - *s2);
}
