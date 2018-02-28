/*
** EPITECH PROJECT, 2017
** Unit tests for EvalExpr
** File description:
** Just to be sure that we are gods.
*/

#include <criterion/criterion.h>
#include <criterion/criterion.h>
#include "../include/my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
}

Test(rush1_1, single, .init = redirect_all_std)
{
	launch_pattern_recon("o", 1, 1);
	cr_assert_stdout_eq_str("[rush1-1] 1 1");
}

Test(rush1_1, rectangle_one, .init = redirect_all_std)
{
	launch_pattern_recon("o---o", 5, 1);
	cr_assert_stdout_eq_str("[rush1-1] 5 1");
}

Test(rush1_1, single_two_line, .init = redirect_all_std)
{
	launch_pattern_recon("o\no", 1, 2);
	cr_assert_stdout_eq_str("[rush1-1] 1 2");
}

Test(rush1_1, rectangle_two, .init = redirect_all_std)
{
	launch_pattern_recon("o--o\no  o\no--o", 4, 3);
	cr_assert_stdout_eq_str("[rush1-1] 4 3");
}
