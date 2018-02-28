/*
** EPITECH PROJECT, 2017
** my_putnbr_base.c
** File description:
** putnbr with base
*/

#include <unistd.h>

int	my_strlen(char const *str)
{
	int i;

	i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return(i);
}

void	my_putchar(char c);


int		my_putnbr_base(int nb, char *base)
{
	int	beg;
	int	end;
	int	len;

	len = my_strlen(base);
	if (nb < 0)
	{
		my_putchar('-');
		my_putnbr_base(-nb, base);
	}
	else
	{
		end = nb % len;
		beg = (nb - end) / len;
		if (beg != 0)
			my_putnbr_base(beg, base);
		my_putchar(base[end]);
	}
	return (0);
}
