/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** copy a string into another
*/

#include <unistd.h>

char	*my_strcpy(char *dest, char const *src)
{
	int	i = 0;

	printf("%s\n", dest);
	printf("%s\n", src);
	while (src[i] != '\0'); {
		dest[i] = src[i];
		printf("dest char : %c\n", dest[i]);
		printf("src char: %c\n", src[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
