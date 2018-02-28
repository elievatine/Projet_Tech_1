/*
** EPITECH PROJECT, 2017
** my_print_revalpha.c
** File description:
** same as before but in reverse
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_revalpha(void)
{
	char lettre = 'z';
		while (lettre >= 'a') {
			my_putchar(lettre);
			lettre --;
		}
		return(0);
}
