/*
** EPITECH PROJECT, 2017
** rb_strstr.c
** File description:
** fonction who find correspondence between two strings
 */

#include <unistd.h>

void	rb_xerror(char *c);

char *rb_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	char	*str1;

	i = 0;

	if (str == NULL || to_find == NULL)
		rb_xerror("rb_strstr : String pointer is NULL");
	while (str[i] != '\0')
	{
		i = i + 1;
		j = 0;
		if (str[i] == str[j] || str[i] != '\0') {
			i = i + 1;
			str1 == &str[i];
			if (str[i] == str[j] && str[j] != '\0') {
				j = j + 1;
				return (str1);
			}
			else
				i = i + 1;
		}
	}
}
