/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** converts a string to a mathematical expression
*/

#include "../include/all.h"

int my_in_str(char tgt, char *comp)
{
	int i = 0;

	for (i; comp[i] != '\0'; i++) {
		if (tgt == comp[i])
			return (comp[i]);
	}
	return (0);
}

int my_strlen_sep(char const *str, char *sep)
{
	int i = 0;

	for (i; ((my_in_str(str[i], sep) == 0) &&
		 (str[i] != '\0')); i++);
	return (i + 1);
}

char *my_strdup(char const *str, char *sep)
{
	int len = my_strlen_sep((char *)str, sep);
	char *dup = malloc(sizeof(char) * (len + 1));
	int i = 0;

	if (dup == NULL)
		return (NULL);
	for (i; ((my_in_str(str[i], sep) == 0) &&
		 (str[i] != '\0')); i++)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}

int get_next(char **copy, char **src, char *sep)
{
	int i = 0;
	char save;

	if ((save = my_in_str((*src)[0], sep)) != 0) {
		(*copy)[i] = save;
		i++;
	} else {
		for (i; ((my_in_str((*src)[i], sep) == 0) &&
			 (*src)[i] != '\0'); i++) {
			(*copy)[i] = (*src)[i];
		}
	}
	(*copy)[i] = '\0';
	*src = &(*src)[i];
	return (i);
}

char *my_strtol(char *str, char **endptr, char *sep)
{
	char *curr;

	*endptr = str;
	curr = my_strdup(str, sep);
	get_next(&curr, &str, sep);
	*endptr = str;
	return (curr);
}
