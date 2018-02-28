/*
** EPITECH PROJECT, 2017
** pattern_recon.c for FinalStumper
** File description:
** String recognition utility for FinalStumper
*/

#include "include/my.h"

void pattern_recon_size(char *buffer, int width, int height)
{
	if (height == width) {
		my_putstr(" || ");
		put_pattern(42, width, height, 1);
		put_pattern(84, width, height, 0);
	}
	put_pattern(84, width, height, 0);
}

