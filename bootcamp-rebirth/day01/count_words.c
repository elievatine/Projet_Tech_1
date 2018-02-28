/*
 ** EPITECH PROJECT, 2017
 ** count_words.c
 ** File description:
 ** count_words
 */

#include <unistd.h>

void	rb_xerror(char *c);

int		ischar(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}

int		count_words(char *str)
{
	int i = 0;
	int m = 0;

	if (str == NULL)
		rb_xerror("count_words: String pointer is NULL");

	while (str[i] != 0) {
		if ((i == 0) && ischar(str[i]) == 1)
			m++;
		else if (!ischar(str[i - 1]) && ischar(str[i]))
			m++;
		i++;
	}
	return (m);
}
