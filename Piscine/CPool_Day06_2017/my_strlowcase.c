/*
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** lowcase
*/

char	*my_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}
