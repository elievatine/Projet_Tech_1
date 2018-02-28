/*
** EPITECH PROJECT, 2017
** my_compute_factorial-rec.c
** File description:
** fact by rec
*/

#include <unistd.h>

int	my_compute_factorial_rec(int nb)
{
	int	x;

	x = 0;
	if (nb = 1) {
		x = 1;
	}
	if (x > 1 && x < 13) {
		x = nb * my_compute_factorial_rec( nb - 1);
		return(x);
		}
		else {
			return(0);
	}
}
