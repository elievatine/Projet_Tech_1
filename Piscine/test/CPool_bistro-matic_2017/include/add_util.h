/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** performs an infinite addition on a string
*/

#ifndef UTIL_H_
#define UTIL_H_

#include "list.h"

int add_to_list(char, t_digit **);
void show_list(t_digit *);
int clean_input(t_digit *);
t_digit *my_rev_str(char *);
void itter_lists(t_digit **, t_digit **);

#endif
