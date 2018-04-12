/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** str to word array
*/

#include <unistd.h>
#include <stdlib.h>

int count_case(char const *str, char c)
{
	int i = 0;
	int nb = 0;

	for (; str[i] != '\0'; i++) {
		if (str[i] == c)
			nb += 1;
	}
	return (nb + 1);
}

int count_lettre(char const *str, char c, int *j)
{
	int i = 0;

	for ( ; str[*j] != '\0'; (*j)++) {
		if (str[*j] == c) {
			*j += 1;
			break;
		}
		i += 1;
	}
	i += 1;
	return (i);
}

char **my_str_to_word_array(char const *str, char c)
{
	int i = 0;
	int j = 0;
	int s = 0;
	int b = 0;
	int count = 0;
	char **array = malloc(sizeof(*array) * (count_case(str, c) + 1));

	if (array == NULL)
		return (NULL);
	for (; i != count_case(str, c); i++) {
		array[i] = malloc((count = count_lettre(str, c, &s)) + 1);
		if (array[i] == NULL)
			return (NULL);
		for ( ; b < count; b++)
			array[i][b] = str[j++];
		array[i][b - 1] = '\0';
		b = 0;
	}
	array[i] = NULL;
	return (array);
}
