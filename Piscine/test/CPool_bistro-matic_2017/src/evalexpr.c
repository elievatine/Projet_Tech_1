/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** converts a string to a mathematical expression
*/

#include "../include/all.h"

int find_multiplication(t_token **list)
{
	while ((*list)->next != NULL) {
		if ((*list)->token[0] == '*' && detect_brackets(*list) == 0) {
			(*list)->prev->token =
				multiplication((*list)->prev->token, (*list)->next->token);
			remove_token_from_list(list);
			remove_token_from_list(list);
			return (1);
		} else if (((*list)->token[0] == '/' || (*list)->token[0] == '%')
			   && detect_brackets(*list) == 0) {
			(*list)->prev->token =
				infindiv((*list)->prev->token, (*list)->next->token,
					  (*list)->token[0]);
			remove_token_from_list(list);
			remove_token_from_list(list);
			return (1);
		}
		(*list) = (*list)->next;
	}
	return (0);
}

int find_addition(t_token **list)
{
	while ((*list)->next != NULL) {
		if ((*list)->token[0] == '+' && detect_brackets(*list) == 0) {
			(*list)->prev->token =
				addition((*list)->prev->token, (*list)->next->token);
			remove_token_from_list(list);
			remove_token_from_list(list);
			return (1);
		} else if ((*list)->token[0] == '-' && detect_brackets(*list) == 0) {
			(*list)->prev->token =
				substraction((*list)->prev->token, (*list)->next->token);
			remove_token_from_list(list);
			remove_token_from_list(list);
			return (1);
		}
		(*list) = (*list)->next;
	}
	return (0);
}

t_token *operate(t_token *list)
{
	t_token	*temp;
	
	go_to_start(&list);
	while (find_multiplication(&list) == 1)
		go_to_start(&list);
	go_to_start(&list);
	temp = list;
	while (remove_brackets(&list) == 1)
                list = temp;
	list = temp;
	while (find_addition(&list) == 1)
		go_to_start(&list);
	go_to_start(&list);
	temp = list;
	while (remove_brackets(&list) == 1)
		list = temp;
	list = temp;
	if (list->next != NULL)
		list = operate(list);
	return (list);
}
