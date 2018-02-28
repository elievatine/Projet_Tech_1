/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** copy n characters from string to another
*/

#include <unistd.h>

char	*my_strncpy(char *dest, char const *src, int n)
{
	int	i;

	i = 0;
	while (i < n){
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return(dest);
}
