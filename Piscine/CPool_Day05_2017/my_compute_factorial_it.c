/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it.c
** File description:
** factoriel en iteratif
*/

#include <unistd.h>

int	my_compute_factorial_it(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb == 0 || nb == 1)
		return(1);
	if (nb < 0 || nb > 12)
		return(0);
	while (nb > 1)
	{
		nb--;
		factorial = factorial * nb;
	}
	return(factorial);
}
