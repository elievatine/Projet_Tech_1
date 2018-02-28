/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** swap 2 integrer content
*/

void	my_putchar(char c);

void	my_swap(int *a, int *b)
{
	int	tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}
