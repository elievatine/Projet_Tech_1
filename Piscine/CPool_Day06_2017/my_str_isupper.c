/*
** EPITECH PROJECT, 2017
** my_str_isupper.c
** File description:
** 1 if all the charac are upper letter 0 if not
*/
int	alpha(char c)
{
	if (c > 64 && c < 91) {
		return(1);
	}
	else
		return(0);
}

int	my_str_isupper(char const *str)
{
	int i;

	i = 0;
	if (alpha(str[i]) == 0) {
		return('0');
		i++;
		}
	else
		return('1');
}
