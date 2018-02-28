/*
** EPITECH PROJECT, 2017
** eval_expr.c
** File description:
** charles.ptacek@epitech.eu
*/

#include <stdio.h>
#include "include/my.h"

int eval_expr(char *str)
{
	int i;
	int j = 0;
	int u = 0;
	int result;

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == '(')
			j++;
		else {
			if (str[i] >= 48 && str[i] <= 57) {
				result = (str[i]) + (str[i]) + u;
				u = 0;
			}
		}
		if (result >= 10) {
			u++;
			result = result - 10;
		}
		if (j >= 1) {
			while (str[i] != '\0' || str[i] == ')') {
				result = (str[i]) + (str[i]) + u;
				u = 0;
				j = 0;
				i++;
			}
		}
	}
	printf("%d\n",result);
	printf("%s\n",str);
	return (0);
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		my_put_nbr(eval_expr(av[1]));
		my_putchar('\n');
		return (0);
	}
	return (84);
}
