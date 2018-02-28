/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** each carac on a string
*/

#include <unistd.h>

int	my_putchar(char c)
{
	write (1, &c, 1);
}

int	my_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i] != 0) {
		my_putchar(str[i]);
		i++;
		}
	return(0);
	
}

int		myputmap(char const *str)
{
	int i;

	i = 0;
	while (str[i] != '\n') {
		i++;
		}
	i++;
	my_putstr(str + i);
	return(0);
}

void	putx(char *ea, int x, int y, int len)
{
	ea[x + y * len] = 'x';
}

void	replace(int **map, char *ea, int *x, int *y)
{
	int len;

	len = 0;
	while (ea[0] != '\n') {
		ea++;
	}
	ea = ea + 1;
	while (ea[len] != '\n') {
		len++;
	}
	len++;
	for(int c = 0; c < map[*y][*x]; c++)
	{
		for(int b = 0; b < map[*y][*x]; b++)
			putx(ea, *x-c, *y-b, len);
	}
}
