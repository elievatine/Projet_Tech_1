/*
** EPITECH PROJECT, 2017
** Tools for FinalStumper
** File description:
** Calculates width and height of STDIN
*/

#include <stdlib.h>
#include "include/my.h"

int *calculate_size(char *buffer, int buffersize)
{
	int *size = malloc(sizeof(int) * 3);
	int i = 0;

	while (buffer[i] != '\0' && i <= buffersize) {
		while (buffer[size[0]] != '\n')
			size[0] += 1;
		if (buffer[i] == '\n')
			size[1] += 1;
		i += 1;
	}
	return (size);
}

void launch_pattern_recon(char *buffer, int width, int height)
{
	if (pattern_recon_1(buffer)) {
		put_pattern(1, width, height, 0);
		pattern_recon_size(buffer, width, height);
	}
	else if (pattern_recon_2(buffer)) {
		put_pattern(2, width, height, 0);
		pattern_recon_size(buffer, width, height);
	}
	else
		pattern_recon_3(buffer, width, height);
}

void put_pattern(int case_id, int width, int height, int multiple_cases)
{
	if (case_id == 42)
		my_putstr("[square] ");
	else if (case_id == 84) {
		my_putstr(" || ");
		my_putstr("[rectangle] ");
	}
	else {
		my_putstr("[rush1-");
		my_put_nbr(case_id);
		my_putstr("] ");
	}
	my_put_nbr(width);
	my_putchar(' ');
	my_put_nbr(height);
	(multiple_cases && case_id != 5 && case_id != 42 && case_id != 84)
		? my_putstr(" || ") : 0;
}
