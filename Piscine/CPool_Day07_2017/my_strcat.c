/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** print the second string right after the first one
*/

#include <stdlib.h>

void my_putchar(char c);

char	*my_strcat(char *dest, char const *src)
{
	int	a;

	a = 0;
	while(dest[a] != '\0') {
		my_putchar(dest[a]);
		a++;
		}
	while (src[a] != '\0') {
		my_putchar(src[a]);
		a++;
		}
		return(NULL);
}
