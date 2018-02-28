/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** copy a string into another
*/

#include <unistd.h>

char	*my_strcpy(char *dest, char const *src)
{
	int	i;

	while (src[i] != ('\0')); {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
