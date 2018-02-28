/*
** EPITECH PROJECT, 2017
** my_evil_str.c
** File description:
** first and last charac swip
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

char	*my_evil_str(char *str)
{
	int	a;
	int	b;
	char	temp;

	b = my_strlen(str) - 1;
	while(a < b){
		temp = str[a];
		str[a] = str[b];
		str[b] = temp;
		a++;
		b--;
	}
	return(str);
}
