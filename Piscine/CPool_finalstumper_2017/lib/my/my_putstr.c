/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** display one by one each char of string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
	while (*str != '\0') {
		my_putchar(*str++);
	}
	return (0);
}
