/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** compteur de caractere dans une string
*/

#include <unistd.h>

int	my_strlen(char const *str)
{
	int i;

	i = 0;
	while(str[i] != '\0'){
		i++;
		}
		return(i);
}

