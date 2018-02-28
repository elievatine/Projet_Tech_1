/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** write int as char
*/

#include <unistd.h>
#include <stdlib.h>

int	get_dec_pos(int nb)
{
	int	i;
	int	res;

	i = 0;
	while (nb > 0) {
		nb = nb / 10;
		i++;
	}
	res = 1;
	while (i > 1) {
		res *= 10;
		i = i - 1;
	}
	return (res);
}

int	get_numlen(int nb)
{
	int i = 0;
	
	for(i; nb != 0; i++) {
		nb = nb / 10;
	}
	return (i);
}

int	handle_sign(int nb, char **num, int *i)
{
	if (nb < 0) {
		(*num)[0] = '-';
		*i = 1;
		nb = (nb * -1);
	}
	return (nb);
}

char	*my_get_char(int nb)
{
	int	dec_pos;
	char	disp;
	char	*num;
	int	i = 0;

	num = malloc(sizeof(char) * get_numlen(nb) + 1);
	if (num == NULL)
		return (NULL);
	nb = handle_sign(nb, &num, &i);
	dec_pos = get_dec_pos(nb);
	while (dec_pos > 0) {
		if (nb == 0) {
			num[i] = '0';
		} else {
			disp = (nb / dec_pos) + '0';
			num[i] = disp;
		}
		nb = nb % dec_pos;
		dec_pos /= 10;
		i++;
	}
	num[i] = '\0';
	return (num);
}

int     my_put_nbr(int nb)
{
 	int     dec_pos;
	char    disp;
	char	*num;
	int	i = 0;

	nb = handle_sign(nb, &num, &i);
	dec_pos = get_dec_pos(nb);
	while (dec_pos > 0) {
		if (nb == 0) {
			write(1, "0", 1);
		} else {
			disp = (nb / dec_pos) + '0';
			write(1, &disp, 1);
		}
		nb = nb % dec_pos;
		dec_pos /= 10;
	}
	return (0);
}
