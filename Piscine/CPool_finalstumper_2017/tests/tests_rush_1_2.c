/*
** EPITECH PROJECT, 2017
** Unit tests for EvalExpr
** File description:
** Just to be sure that we are gods.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_stdo(void)
{
	cr_redirect_stdout();
}

Test(rush1_2, single, .init = redirect_all_stdo)
{
	launch_pattern_recon("*", 1, 1);
	cr_assert_stdout_eq_str("[rush1-2] 1 1");
}

Test(rush1_2, rectangle_one, .init = redirect_all_stdo)
{
	launch_pattern_recon("/****", 5, 1);
	cr_assert_stdout_eq_str("[rush1-2] 5 1");
}

Test(rush1_2, single_two_line, .init = redirect_all_stdo)
{
	launch_pattern_recon("*\n*", 1, 2);
	cr_assert_stdout_eq_str("[rush1-2] 1 2");
}

Test(rush1_2, rectangle_two, .init = redirect_all_stdo)
{
	launch_pattern_recon("/***\n*  *\n/***", 4, 3);
	cr_assert_stdout_eq_str("[rush1-2] 4 3");
}
