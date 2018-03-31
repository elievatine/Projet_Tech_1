/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** each carac on a string
*/

#include <unistd.h>

int	my_putchar(char c)
{
	write (1, &c, 1);
}

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

void	dash_H()
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putstr("\n USAGE\n ./my_screensaver \n[OPTIONS] set_random");
	my_putstr("\n ID 1 : ((av[1][0]) = '1') screen saver with a circle growing\n");
	my_putstr(" ID 2 : ((av[1][0]) = '2') screen saver with random pixels apparing gradually");
	my_putstr("\nOPTIONS\n-h       print the usage and quit.");
}
