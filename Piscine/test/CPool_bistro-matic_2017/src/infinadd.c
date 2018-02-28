/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** performs an infinite addition on a string
*/

#include "../include/my.h"
#include "../include/operations.h"
#include "../include/list.h"
#include "../include/add_util.h"

int parse(char *arg, t_digit **list)
{
	int sign = 0;
	int i = 0;
	
	for (i; ((arg[i] > '9' || arg[i] < '0') &&
		 (arg[i] != '-' && arg[i] != '+' &&
		  arg[i] != '\0')); i++);
	for (i; (arg[i] == '-' || arg[i] == '+'); i++) {
		if (arg[i] == '-' && sign == 1)
			sign = 0;
		else if (arg[i] == '-' && sign == 0)
			sign = 1;
	}
	for (i; (arg[i] <= '9' && arg[i] >= '0' && arg[i] != '\0'); i++) {
		add_to_list(arg[i], list);
	}
	return (sign);
}

t_digit *choose_op(int sign_one, int sign_two, t_digit *num_one, t_digit *num_two)
{
	t_digit *ret;
	if (num_one->digit == 0 || num_two->digit == 0)
		return (NULL);
	if (sign_one == 0 && sign_two == 0) {
		ret = add(num_one, num_two);
	} else if (sign_one == 1 && sign_two == 1) {
		ret = add(num_one, num_two);
		add_to_list('-', &ret);
	} else if (sign_one == 1 && sign_two == 0) {
		ret = sub(num_two, num_one);
	} else if (sign_one == 0 && sign_two == 1) {
		ret = sub(num_one, num_two);
	}
	return (ret);
}

char *convert_to_str(t_digit *res)
{
	t_digit *copy = res;
	int	len = 0;
	char	*num;
	int	i = 0;

	while (copy != NULL) {
		copy = copy->next;
		len++;
	}
	num = malloc(sizeof(char) * (len + 1));
	if (num == NULL)
		return (NULL);
	while (res != NULL) {
		num[i] = res->digit;
		res = res->next;
		i++;
	}
	return (num);
}

char *infinadd(char *input_num_one, char *input_num_two)
{
	t_digit *num_one = NULL;
	int sign_one;
	t_digit *num_two = NULL;
	int sign_two;
	t_digit *ret;

	add_to_list(0, &num_one);
	add_to_list(0, &num_two);
	sign_one = parse(input_num_one, &num_one);
	sign_two = parse(input_num_two, &num_two);
	ret = choose_op(sign_one, sign_two, num_one, num_two);
	return (convert_to_str(ret));
}
