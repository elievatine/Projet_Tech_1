/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** revers string content
*/

char	*my_revstr(char *str)
{

	int i;
	int c;
	int t;

	i = 0;
	c = 0;
	t = 0;

	while (str[c] != '\0');
	c++;
	while (i < c) {
		t = str[i];
		str[i] = str[c];
		str[c] = t;
		i++;
		c--;
		}
	return(str);
}
