/*
** EPITECH PROJECT, 2017
** rb_strlowcase.c
** File description:
** str low case
*/

#include <unistd.h>

void	rb_xerror(char *c);

char	*rb_strlowcase(char *str)
{
	int i = 0;

	if (str == NULL)
		rb_xerror("rb_strlowcase : String pointer is NULL");

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

