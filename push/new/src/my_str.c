/*
** Epitech PROJECT, 2018
** putstr.c
** File description:
** put str :)
*/

#include <unistd.h>

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

void my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
}
