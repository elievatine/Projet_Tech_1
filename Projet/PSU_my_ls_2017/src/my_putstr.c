/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** each carac on a string
*/

#include <unistd.h>

int	my_putchar(char c);

int	my_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i] != 0) {
		my_putchar(str[i]);
		i++;
		}
	return(0);
}
/*if(strcmp(ptr->d_name,".") == 0 || strcmp(ptr->d_name,"..") == 0)*/

