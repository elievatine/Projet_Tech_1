/*
** EPITECH PROJECT, 2017
** operator
** File description:
** operator for Evalexpr
*/

#include "../include/all.h"
#include "../include/my.h"

int	len_int(int result)
{
	int	i = 0;

	if (result < 0)
		i++;
	while (result != 0) {
		result = result / 10;
		i++;
	}
	return (i);
}

char	*addition(char *nbr1, char *nbr2)
{
	char	*result;

	result = malloc(sizeof(char) * ((my_strlen(nbr1) + 1) +
					(my_strlen(nbr2) + 1)));
	result = infinadd(nbr1, nbr2);
	return (result);
}

char	*add_minus(char *num)
{
	char	*res = malloc((my_strlen(num) + 2) * sizeof(char));
	int	i = 0;

	res[i] = '-';
	for (i; num[i] != '\0'; i++) {
		res[i + 1] = num[i];
	}
	res[i + 1] = '\0';
	return (res);
}

char	*substraction(char *nbr1, char *nbr2)
{
	char	*res = malloc(sizeof(char) * (my_strlen(nbr1) + 1));

	res = infinadd(nbr1, add_minus(nbr2));
	return (res);
}

char	*multiplication(char *nbr1, char *nbr2)
{
	char	*ctr;
	char	*res;

	res = malloc(sizeof(char) * (my_strlen(nbr1) + my_strlen(nbr2) + 1));
	res = "0";
	ctr = "0";
	while (my_strcmp(nbr2, ctr) != 0) {
		ctr = infinadd(ctr, "1");
		res = infinadd(res, nbr1);
	}
	return (res);
}
