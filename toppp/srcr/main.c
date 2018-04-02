/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** swap 2 integrer content
*/

#include <stdio.h>
#include "../include/incl.h"


void	option_d()
{
	my_putstr("\n ID 1 : ((av[1][0]) == '1') screen saver with with line frome the sky moderne art\n");
	my_putstr(" ID 2 : ((av[1][0]) == '2') screen saver with random pixels apparing gradually");
	my_putstr("\n ID 3 : ((av[1][0]) == '3') color alternate and disapear ");
}

void	option_h()
{
	my_putstr("animation rendering in a CSFML window.\nUSAGE");
	my_putstr("\n./my_screensaver [OPTIONS] animation_id");
	my_putstr("line from the sky (1).\n");
	my_putstr("\t\t\t   trand pixies (2).\n");
	my_putstr("\t\t\t   talternate color (3).\n");
	my_putstr("OPTIONS\n");
	my_putstr("-d \tprint the description of all the animations and quit.\n");
	my_putstr("-h \tprint the usage and quit.\n");
}

int main(int ac, char **av)
{
	if (ac != 2) 
		rb_xerror("./my_screensaver: bad arguments: 0 given but 1 is required\nretry with -h");
	else {
		if (av[1][0] == '1')
			first_save();
		if (av[1][0] == '2')
			sec_save();
		if (av[1][0] == '3')
			third_save();
		if (av[1][0] == '-' && av[1][1] == 'd')
			option_d();
		if (av[1][0] == '-' && av[1][1] == 'h')
			option_h();
	}
}
