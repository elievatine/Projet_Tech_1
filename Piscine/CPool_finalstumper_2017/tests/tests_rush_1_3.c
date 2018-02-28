/*
** EPITECH PROJECT, 2017
** Unit tests for EvalExpr
** File description:
** Just to be sure that we are gods.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_st(void)
{
	cr_redirect_stdout();
}

Test(rush1_3, single, .init = redirect_all_st)
{
	launch_pattern_recon("B", 1, 1);
	cr_assert_stdout_eq_str("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1");
}

Test(rush1_3, rectangle_one, .init = redirect_all_st)
{
	launch_pattern_recon("BBBBB", 5, 3);
	cr_assert_stdout_eq_str("[rush1-3] 5 3 || [rush1-4] 5 3 || [rush1-5] 5 3");
}

Test(rush1_3, single_two_line, .init = redirect_all_st)
{
	launch_pattern_recon("B\nB", 1, 2);
	cr_assert_stdout_eq_str("[rush1-3] 1 2 || [rush1-4] 1 2 || [rush1-5] 1 2");
}

Test(rush1_3, rectangle_two, .init = redirect_all_st)
{
	launch_pattern_recon("ABBA\nB  B\nABBA", 4, 3);
	cr_assert_stdout_eq_str("[rush1-3] 4 3");
}
