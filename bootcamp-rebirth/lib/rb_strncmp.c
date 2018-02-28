/*
 ** EPITECH PROJECT, 2017
 ** rb_strncmp.c
 ** File description:
 ** strncmp fonction
 */

#include <unistd.h>

void	rb_xerror(char *c);

int		rb_strncmp(char const *s1, char const *s2, int n)
{
	if (s1 == NULL || s2 == NULL)
		rb_xerror("rb_strncmp : String pointer is NULL");

if (n == 0)
		return (0);
	n--;
	while (*s1 == *s2 && *s1 && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}
