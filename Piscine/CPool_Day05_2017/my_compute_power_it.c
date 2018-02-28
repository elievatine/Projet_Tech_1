/*
** EPITECH PROJECT, 2017
** my_compute_power_it.c
** File description:
** power in it
*/

int	my_compute_power_it(int nb, int p)
{
	int	temp;

	if (p < 0 )
		return(0);
	if (p == 0)
		return(1);
	temp = nb;
	while (p > 1) {
		nb = nb * temp;
		p--;
		}
		return(nb);
}
