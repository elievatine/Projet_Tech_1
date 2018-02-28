/*
** EPITECH PROJECT, 2017
** my_print_digits.c
** File description:
** chiffre de 0à9
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_digits(void)
{
	char chiffre = '0';
		while (chiffre <= '9') {
			my_putchar(chiffre);
			chiffre ++;
		}
		return(0);
}
