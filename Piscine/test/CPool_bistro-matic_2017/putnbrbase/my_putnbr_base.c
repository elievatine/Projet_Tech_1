/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** writes a given int on the screen in a given base
*/

#include <unistd.h>

int	my_strlen_base(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_base_pos(int nb, int base)
{
	int	i;
	int	res;

	i = 0;
	while (nb > 0) {
		nb = nb / base;
		i++;
	}
	res = 1;
	while (i > 1) {
		res *= base;
		i--;
	}
	return(res);
}

int	handle_sign(int nb)
{
	if (nb < 0) {
		write(1, "-", 1);
		nb = -nb;
	}
	return (nb);
}

int	my_putnbr_base(int nbr, char const *base)
{
	int	base_pos;
	int	base_len;
	char	disp;

	nbr = handle_sign(nbr);
	base_len = my_strlen_base(base);
	base_pos = get_base_pos(nbr, base_len);
	while (base_pos > 0) {
		disp = base[nbr / base_pos];
		write(1, &disp, 1);
		nbr = nbr % base_pos;
		base_pos /= base_len;
	}
	return (0);
}
