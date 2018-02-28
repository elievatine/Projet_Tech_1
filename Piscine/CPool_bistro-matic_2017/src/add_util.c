/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** performs an infinite addition on a string
*/

#include "../include/my.h"
#include "../include/list.h"

int add_to_list(char digit, t_digit **list)
{
	t_digit *element;

	element = malloc(sizeof(*element));
	if (element == NULL)
		return (NULL);
	else {
		element->digit = digit;
		element->next = *list;
		*list = element;
		return (0);
		}
	return (res);
}

t_digit *my_rev_str(char *str)
{
	t_digit *rev;

	rev = NULL;
	for(int i = 0; str[i] != '\0'; i++) {
		add_to_list(str[i], &rev);
	}
	return (rev);
}

void itter_lists(t_digit **l_one, t_digit **l_two)
{
	t_digit *temp_one = *l_one;
	t_digit *temp_two = *l_two;

	if (temp_one->digit != 0) {
		*l_one = temp_one->next;
		temp_one = temp_one->next;
	}
	if (temp_two->digit != 0) {
		*l_two = temp_two->next;
		temp_two = temp_two->next;
	}
}
