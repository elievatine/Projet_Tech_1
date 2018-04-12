/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** str n cmp
*/

int my_strncmp(char const *str1, char const *str2, int n)
{
	int cmp = 0;

	for (int i = 0; i != n; i++)
		if (str1[i] == str2[i])
			cmp += 1;
	if (cmp == n)
		return (0);
	else
		return (1);
}
