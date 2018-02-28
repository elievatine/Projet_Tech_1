/*
** EPITECH PROJECT, 2017
** included.h
** File description:
** each include
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

int		reddit(char *path, char *tab, int x);

int		my_putchar(char c);

int		my_putstr(char const *str);

int		my_printf(char *format, ...);

void	my_sw(int **map);

int		get_collumn(char *map);

int		get_line(char **map);

int		my_strlen(char *str);

char	**my_str_to_word_array(char *str);

void	my_algo(int **map);

int		search_big(int **map, int *x, int *y);

void	replace(int **map, char *ea, int *x, int *y);

int		myputmap(char const *str);
