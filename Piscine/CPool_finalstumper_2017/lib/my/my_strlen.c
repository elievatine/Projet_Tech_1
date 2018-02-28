/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** counts and returns number of chars in string passed as param
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i += 1;
	return (i);
}
