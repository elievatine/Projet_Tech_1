/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** putchar>10
*/

#include <unistd.h>

void	my_putchar(char c);

int		my_put_nbr(int nb)
{
		int pos;
		char out;

		if (nb < 0) {
			my_putchar('-');
			nb = -nb;
		}
		pos = 1;
		while (pos < nb) {
			pos  = pos * 10;
		}
		pos = pos / 10;
		while (nb > 0) {
			out = nb / pos + '0';
			my_putchar(out);
			nb = nb % pos;
			pos = pos / 10;
		}
}
