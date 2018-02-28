/*
** EPITECH PROJECT, 2017
** tests_bistro1.c
** File description:
** bistro first unit test
*/

#include <criterion/criterion.h>
#include "../include/all.h"
#include <criterion/redirect.h>

void redirect_all_std(void)
{
	cr_redirect_stdout();
}

void	cr_assert_stdout_eq_str(void)
{
	cr_assert_stdout_eq_str();
}


Test(bistro1, first, .init = redirect_all_std)
{
	cr_expect("9");
	cr_assert_stdout_eq_str("echo (3+6) | ../calc 0123456789 "()+-*/%" 3");
