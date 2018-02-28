/*
** EPITECH PROJECT, 2017
** pattern_recon.c for FinalStumper
** File description:
** String recognition utility for FinalStumper
*/

#include "my.h"

int pattern_recon_1(char *buffer)
{
	return (buffer[0] == 'o' ? 1 : 0);
}

int pattern_recon_2(char *buffer)
{
	return (buffer[0] == '*' || (buffer[0] == '/' && buffer[1] == '*')
		? 1 : 0);
}

void pattern_recon_3(char *buffer, int width, int height)
{
	int status = 0;

	if (buffer[0] == 'B') {
		put_pattern(3, width, height, 1);
		status = 1;
	}
	if (buffer[width - 1] == 'A') {
		put_pattern(3, width, height, 0);
		status = 1;
	}
	pattern_recon_4(buffer, width, height, status);
}

void pattern_recon_4(char *buffer, int width, int height, int status)
{
	(status == 0) ? status = 0 :  1;
	if (buffer[0] == 'B') {
		put_pattern(4, width, height, 1);
		status = 1;
	}
	if (buffer[width - 1] == 'C' && buffer[height * width + 1] == 'C') {
		put_pattern(4, width, height, 0);
		status = 1;
	}
	pattern_recon_5(buffer, width, height, status);
}

void pattern_recon_5(char *buffer, int width, int height, int status)
{
	(status == 0) ? status = 0 : 1;
	if (buffer[0] == 'B') {
		put_pattern(5, width, height, 1);
		status = 1;
	}
	if (buffer[width - 1] == 'C' && buffer[height * width + 1] == 'A') {
		put_pattern(5, width, height, 0);
		status = 1;
	}
	(status == 0) ? put_pattern(0, 0, 0, 0) : 0;
}
