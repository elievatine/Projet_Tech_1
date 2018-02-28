/*
** EPITECH PROJECT, 2017
** division
** File description:
** division function
*/

#include "../include/all.h"
#include "../include/my.h"

int	nbr1_is_sup_equal(char *nbr1, char *nbr2)
{
	int	i = 0;
	int	len1 = my_strlen(nbr1);
	int	len2 = my_strlen(nbr2);

	if (len1 < len2)
		return (0);
	else if (len1 > len2)
		return (1);
	while (nbr1[i]) {
		if (nbr1[i] < nbr2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*infindiv(char *nbr1, char *nbr2, char symb)
{
	int	len = my_strlen(nbr1);
	char	*quotien;

	quotien = malloc(sizeof(char*) * len + 1);
	quotien = "0";
	if (quotien == NULL)
		return (NULL);
	while (nbr1_is_sup_equal(nbr1, nbr2)) {
		quotien = infinadd(quotien, "1");
		nbr1 = substraction(nbr1, nbr2);
	}
	if (symb == '/')
		return (quotien);
	else if (symb == '%')
		return (nbr1);
}
