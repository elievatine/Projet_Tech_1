/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** neg or pos
*/

void my_putchar(char c);

int my_isneg(int n)
{
		if (n < 0) {
		my_putchar('N');
		}
		else {
		my_putchar('P');
		}
}
