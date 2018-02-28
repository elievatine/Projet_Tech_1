/*
** EPITECH PROJECT, 2017
** Unit tests for EvalExpr
** File description:
** Just to be sure that we are gods.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_stdou(void)
{
	cr_redirect_stdout();
}

Test(rush1_5, rectangle_two, .init = redirect_all_stdou)
{
	launch_pattern_recon("ABBC\nB  B\nABBC", 4, 3);
	cr_assert_stdout_eq_str("[rush1-4] 4 3");
}
