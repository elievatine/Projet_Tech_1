/*
** EPITECH PROJECT, 2017
** my_str_isnum.c
** File description:
** 1 if only number 0 if not
*/
int	alpha(char c)
{
	if (c > 47 && c < 58) {
		return(1);
	}
	else
		return(0);
}

int	my_str_isnum(char const *str)
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
