/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** swap 2 integrer content
*/

void	my_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
