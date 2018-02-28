/*
** EPITECH PROJECT, 2017
** infin_add.c
** File description:
** addition infinie
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		my_strlen(char const *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char*	my_revstr(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = my_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int		my_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i] != 0) {
		my_putchar(str[i]);
		i++;
		}
	return(0);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}

char	*infin_add(char *str1, char *str2)
{
	char	*res;
	int		i;
	int		j;
	int		cpt;
	int		retenue;

	i = my_strlen(str1);
	j = my_strlen(str2);

	res =  (char *)malloc((i + j + 2) * sizeof(char));
	retenue = 0;
	cpt = 0;
	i--;
	j--;
	while (i >= 0 && j >= 0)
	{
		retenue = (str1[i] - '0') + (str2[j] - '0') + retenue;
		res[cpt++] = retenue % 10 + '0';
		retenue = retenue / 10;
		i--;
		j--;
	}
	while (i >= 0)
	{
		retenue = (str1[i] - '0') + retenue;
		res[cpt++] = retenue % 10 + '0';
		retenue = retenue / 10;
		i--;
	}
	while (j >= 0)
	{
		retenue = (str2[j] - '0') + retenue;
		res[cpt++] = retenue % 10 + '0';
		retenue = retenue / 10;
		j--;
	}
	if (retenue)
		res[cpt] = retenue + '0';

	res[cpt] = '\0';
	res = my_revstr(res);
	return(res);
}

