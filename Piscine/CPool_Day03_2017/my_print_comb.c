/*
** EPITECH PROJECT, 2017
** my_print_comb.c
** File description:
** 012,013...
*/

#include <unistd.h>

void my_putchar(char c);

void my_putabc(char a, char b, char c)
{
	my_putchar(a);
	my_putchar(b);
	my_putchar(c);
}

int my_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7') {
		b = a + 1;
		while (b <= '8') {
			c = b + 1;
			while (c <= '9') {
				my_putabc(a, b, c);
				if ( a < '7') {
					my_putchar(',');
					my_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
