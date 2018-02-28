/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** performs an infinite addition on a string
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/list.h"
#include "../include/add_util.h"

int get_remainder_add(int *current, int remainder)
{
	remainder = *current / 10;
	*current = *current % 10;
	*current += '0';
	return (remainder);
}

t_digit *add(t_digit *num_one, t_digit *num_two)
{
	t_digit *copy_one = num_one;
	t_digit *copy_two = num_two;
	int current = 1;
	int remainder = 0;
	t_digit *result;

	result = NULL;
	while (copy_one->digit != 0 || copy_two->digit != 0) {
		current = (clean_input(copy_one) +
			   clean_input(copy_two) + remainder);
		remainder = get_remainder_add(&current, remainder);
		add_to_list(current, &result);
		itter_lists(&copy_one, &copy_two);
	}
	if (remainder == 1)
		add_to_list('1', &result);
	return (result);
}

void	negative_result(t_digit **result)
{
	t_digit	*save;

	add_to_list('-', result);
	save = *result;
	while ((*result)->next != NULL) {
		if ((*result)->digit != '-')
			(*result)->digit = (9 - ((*result)->digit - '0')) + '0';
		(*result) = (*result)->next;
	}
	if ((*result)->digit != '-')
		(*result)->digit = (10 - ((*result)->digit - '0')) + '0';
	*result = save;
}

int get_remainder_sub(int *current, int remainder)
{
	if (*current < 0) {
		*current = *current + 10 + '0';
		remainder = 1;
	} else {
		*current = *current + '0';
		remainder = 0;
	}
	return (remainder);
}

t_digit *sub(t_digit *num_one, t_digit *num_two)
{
	t_digit *copy_one = num_one;
	t_digit *copy_two = num_two;
	int current = 1;
	int remainder = 0;
	t_digit *result;

	result = NULL;
	while (copy_one->digit != 0 || copy_two->digit != 0) {
		current = (clean_input(copy_one) -
			   clean_input(copy_two) - remainder);
		remainder = get_remainder_sub(&current, remainder);
		add_to_list(current, &result);
		itter_lists(&copy_one, &copy_two);
	}
	if (remainder == 1) {
		negative_result(&result);
	}
	return (result);
}
