/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** converts a string to a mathematical expression
*/

#include "../include/all.h"
#include "../include/my.h"

int add_token_to_list(t_token **list, char *token)
{
	t_token *item = malloc(sizeof(*item));

	if (item == NULL)
		return (84);
	item->token = token;
	item->next = NULL;
	item->prev = *list;
	if (*list != NULL)
		(*list)->next = item;
	*list = item;
}

int remove_token_from_end(t_token **list)
{
	t_token *prev;
	
	if (((*list)->prev != NULL) && ((*list)->next == NULL)) {
		prev = (*list)->prev;
		prev->next = NULL;
		free(*list);
		*list = prev;
		return (0);
	}
	return (1);
}

int remove_token_from_start(t_token **list)
{
	t_token *next;
	
	if (((*list)->prev == NULL) && ((*list)->next != NULL)) {
		next = (*list)->next;
		next->prev = NULL;
		free(*list);
		*list = next;
		return (0);
	}
	return (1);
}

int remove_token_from_list(t_token **list)
{
	t_token *prev;
	t_token *next;

	if (((*list)->prev != NULL) && ((*list)->next != NULL)) {
		prev = (*list)->prev;
		next = (*list)->next;
		prev->next = next;
		next->prev = prev;
		free(*list);
		*list = next;
		return (0);
	} else if (((*list)->next == NULL)) {
		return (remove_token_from_end(list));
	} else
		return (remove_token_from_start(list));
	return (1);
}

void go_to_start(t_token **list)
{
	while ((*list)->prev != NULL)
		(*list) = (*list)->prev;
}

t_token *tokenizer(char *rem, char *comp)
{
	char *token;
	t_token *list = NULL;
	int i = 0;
	
	while (rem[0] != '\0') {
		token = my_strtol(rem, &rem, comp);
		add_token_to_list(&list, token);
		i++;
	}
	go_to_start(&list);
	return (list);
}
