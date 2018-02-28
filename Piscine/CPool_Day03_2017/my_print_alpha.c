/*
** EPITECH PROJECT, 2017
** my_print_alpha.c
** File description:
** ss
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_alpha(void)
{
	char lettre = 'a';
		while (lettre <= 'z') {
			my_putchar(lettre);
			lettre ++;
		}
		return(0);
}
