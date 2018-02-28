/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** each carac on a string
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

#include "../include/included.h"

int		my_reddit(char *path, char *tab, int x)
{
	int	fd;
	int	ea;
	char	*buffer = malloc(sizeof(char) * x);
	int	i;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd != -1) {
		ea = read(fd, buffer, x);
		while (i < ea)
		{
			tab[i] = buffer[i];
			i++;
		}
	}
	close(fd);
	tab[i] = '\0';
	return (ea);
}

int		my_atoi(const char *str)
{
	int res = 0;
	int i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res);
}

int		**create_map(unsigned char *ea)
{
	int **res;
	int y = 0;
	int i = 0;
	int taille = my_atoi(ea);
	res = (int **)malloc(sizeof(int *) * (taille + 1));
	res[taille] = NULL;
	while (ea[i] >= '0' && ea[i] <= '9')
		i++;
	i += 1;
	while (y < taille)
	{
		int x = 0;
		res[y] = (int *)malloc(sizeof(int) * (taille + 1));
		while (x < taille)
			res[y][x++] = ea[i++];
		res[y][x] = -1;
		i += 1;
		y++;
	}
	return (res);
}

int		main(int ac, char **av)
{
	struct stat si;
	char	*ea;
	int		**map;
	int		x;
	int		y;

	if (ac != 2) {
		my_putstr("Error");
		return (84);
	}
	stat(av[1], &si);
	ea = malloc(sizeof(char) * si.st_size + 1);
	my_reddit(av[1], ea, si.st_size);
	map = create_map(ea);
	my_sw(map);
	my_algo(map);
	search_big(map, &x, &y);
	replace(map, ea, &x, &y);
	myputmap(ea);
	return (0);
}
