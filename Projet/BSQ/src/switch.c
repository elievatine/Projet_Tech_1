/*
** EPITECH PROJECT, 2017
** switch.c
** File description:
** each carac on a string
*/

#include "../include/included.h"

int		get_line(char **map)
{
	int x = 0;

	while (map[x] != NULL)
		x++;
	return (x);
}

void	my_sw(int **map)
{

	for(int y = 0; map[y]; y++)
	{
		for(int x = 0; map[y][x] != -1; x++)
		{
			if (map[y][x] == '.')
				map[y][x] = 1;
			if (map[y][x] == 'o')
				map[y][x] = 0;
		}
	}
}

int		get_min(int **map, int y, int x)
{
	int min = 10000000;

	if (x > 0 && map[y][x - 1] < min)
		min = map[y][x - 1];
	if (x > 0 && y > 0 && map[y - 1][x - 1] < min)
		min = map[y - 1][x - 1];
	if (y > 0 && map[y - 1][x] < min)
		min = map[y - 1][x];
	return (min);
}

void	my_algo(int **map)
{
	int y;
	int x;

	y = 1;
	while (map[y])
	{
		x = 1;
		while (map[y][x] != -1)
		{
			if (map[y][x] != 0)
				map[y][x] = get_min(map, y, x) + 1;
			x++;
		}
		y++;
	}
}

int		search_big(int **map, int *xptr, int *yptr)
{
	int	max;
	int x;
	int y;

	max = 0;
	*yptr = 0;
	*xptr = 0;
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x] != -1)
		{
			if (map[y][x] > max) {
				max = map[y][x];
				*xptr = x;
				*yptr = y;
			}
			x++;
		}
		y++;
	}
	return (max);
}
