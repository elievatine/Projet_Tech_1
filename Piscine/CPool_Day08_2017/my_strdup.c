/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** allocate memory and copy the string giv as argument in it
*/

#include <stdlib.h>

int	my_strlen(char const *src);

char *my_strdup(char const *src)
{
	char	*copy;
	int	a;
	int	b;

	b = my_strlen(src);
	a = 0;
	copy = malloc(sizeof(char) * (b + 1));
	if (copy == NULL)
		return NULL;
	while (src[a]) {
		copy[a] = src[a];
		a++;
		}
	copy[a] = '\0';
	return (copy);
}
