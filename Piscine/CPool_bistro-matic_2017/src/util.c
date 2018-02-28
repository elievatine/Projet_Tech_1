/*
** EPITECH PROJECT, 2017
** bistro_matic
** File description:
** calculatrice qui gere les nombres infinis
*/

#include <unistd.h>
#include "../include/all.h"
#include "../include/bistro-matic.h"

void	my_putstr(char const *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		write(1, &str[i], 1);
	}
}

int	my_strlen(char const *str)
{
	int	counter = 0;
	
	for (int i = 0; str[i] != '\0'; i++) {
		counter++;
	}
	return (counter);
}


char*	my_revstr(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = my_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int	check_brackets(t_token *list)
{
	int	brackets = 0;

	while (list != NULL) {
		if (list->token[0] == '(')
			brackets++;
		if (list->token[0] == ')')
			brackets--;
		list = list->next;
	}
	return (brackets);
}

char	*eval_expr(char const *base, char const *ops, char const *expr, unsigned int size)
{
	t_token	*list;
	t_token	*temp;

	list = tokenizer((char *)expr, "()+-*/%");
	if (check_brackets(list) != 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(84);
	}
	list = operate(list);
	go_to_start(&list);
	return (list->token);
}
