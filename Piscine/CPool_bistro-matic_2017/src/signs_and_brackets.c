/*
** EPITECH PROJECT, 2017
** bistro matic
** File description:
** calculatrice
*/

#include "../include/all.h"

int detect_brackets(t_token *list)
{
	if  (list->next->token[0] == ')' && list->prev->token[0] == '(')
		return (1);
	else if (list->next->token[0] == ')'|| list->next->token[0] == '(' ||
		 list->prev->token[0] == ')'|| list->prev->token[0] == '(')
		return (2);
	else
		return(0);
}

void handle_brackets(t_token **list)
{
	(*list) = (*list)->prev;
	remove_token_from_list(list);
	(*list) = (*list)->next;
	remove_token_from_list(list);
}

int detect_signs(t_token *list)
{
	if ((list->token[0] == '+' || list->token[0] == '-') &&
	    (list->next->token[0] == '+' || list->next->token[0] == '-') &&
	    (list->token[1] == '\0' || list->token[1] == '\0')) {
		return (1);
	}
	else
		return (0);
}

void handle_signs(t_token **list)
{
	if ((*list)->token[0] == '+' && (*list)->token[1] == '\0') {
		if ((*list)->next->token[0] == '+') {
			remove_token_from_list(list);
		}
		else if (((*list)->next->token[0] == '-')) {
			remove_token_from_list(list);
			(*list)->token[0] == '-';
		}
	} else if ((*list)->token[0] == '-' && (*list)->token[1] == '\0') {
		if ((*list)->next->token[0] == '+') {
			remove_token_from_list(list);
			(*list)->token[0] == '-';
		}
		else if (((*list)->next->token[0] == '-')) {
			remove_token_from_list(list);
			(*list)->token[0] == '+';
		}
	}
	
}

int remove_brackets(t_token **list)
{
	int ret = 0;

	if ((*list)->next != NULL)
		(*list) = (*list)->next;
	else
		return (2);
	while (*list != NULL && (*list)->next != NULL && (*list)->prev != NULL) {
		if (detect_brackets(*list) == 1 &&
		    (*list != NULL && (*list)->next != NULL && (*list)->prev != NULL)) {
			handle_brackets(list);
			ret = 1;
		} else if (detect_signs(*list) == 1 &&
			(*list != NULL && (*list)->next != NULL && (*list)->prev != NULL)) {
			handle_signs(list);
			ret = 1;
		}
		(*list) = (*list)->next;
	}
	return (ret);
}
