/*
** EPITECH PROJECT, 2017
** my_strcapîtalize.c
** File description:
** capitalize first letter of each words
*/

#include <stdio.h>

int		is_number(char c)
{
	return (c > 47 && c < 58);
}

int		is_lower(char c)
{
	return (c > 96  && c < 123);
}

int		is_letter(char c)
{
	return (is_lower(c) || (c > 64 && c < 91));
}

char	*my_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i]) {
		if (i == 0 && is_lower(str[i]))
			str[i] += 32;
		if (is_lower(str[i]) && !is_letter(str[i - 1]) && !is_number(str[i - 1]))
			str[i] -= 32;
		i++;
	}
	return(str);
}
