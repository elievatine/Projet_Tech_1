/*
** EPITECH PROJECT, 2017
** main.c for FinalStumper
** File description:
** main.c
*/

#include <unistd.h>
#include "my.h"

int main() {
	char buffer[4096 + 1];
	int buffersize;
	int *size;
	int offset;

	while (offset = read(0, buffer + buffersize, 4096 - buffersize))
	       buffersize += offset;
	buffer[buffersize] = '\0';
	size = calculate_size(buffer, buffersize);
	launch_pattern_recon(buffer, size[0], size[1]);
	my_putchar('\n');
	return (!(size[1]) ? 84 : 0);
}
