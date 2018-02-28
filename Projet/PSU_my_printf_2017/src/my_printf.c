/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my own personnal printf
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int	my_putchar(char c);

int	my_putstr(char const *str);

void	my_put_nbr(int n);

int		my_putnbr_base(int nbr, char const *base);

int	my_printf(char *format, ...)
{
	int	a;

	a = 0;

	va_list list;
	va_start(list, format);

	while (format[a] != '\0') {
		if (format[a] == '%') {
			a += 1;
			switch (format[a])
			{
				case 'c':
					my_putchar(va_arg(list, int));
					break;

				case 's':
					my_putstr(va_arg(list, char *));
					break;

				case 'd':
					my_put_nbr(va_arg(list, int));
					break;

				case 'o':
					my_putnbr_base(va_arg(list, int), "01234567");
					break;

				case 'i':
					my_put_nbr(va_arg(list, int));
					break;

				case 'x':
					my_putnbr_base(va_arg(list, int), "0123456789abcdef");
					break;

				case 'X':
					my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
					break;

				case '%':
					my_putchar('%');
					break;

				case 'b':
					my_putnbr_base(va_arg(list, int), "01");
					break;

				case 'p':
					my_putstr("0x");
					my_putnbr_base(va_arg(list, int), "0123456789abcdef");
					break;
			}
		}
		else
			my_putchar(format[a]);
		a++;
	}
	va_end(list);
}
