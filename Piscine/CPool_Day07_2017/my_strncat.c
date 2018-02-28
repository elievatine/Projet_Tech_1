/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** n char after the first string
*/

#include <stdlib.h>

void	my_putchar(char c);

char	*my_strncat(char *dest, char const *src, int nb)
{
	int	a;

	a = 0;
	while(dest[a] != '\0') {
		my_putchar(dest[a]);
		a++;
		}
	while (src[a] != src[nb]) {
		my_putchar(src[a]);
		a++;
		}
		return(NULL);
}
