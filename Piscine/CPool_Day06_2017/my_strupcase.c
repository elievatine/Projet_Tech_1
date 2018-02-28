/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** strupcase
*/

char *my_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}
