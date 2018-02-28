/*
** EPITECH PROJECT, 2017
** Unit tests for EvalExpr
** File description:
** Just to be sure that we are gods.
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_stdout(void)
{
	cr_redirect_stdout();
}

Test(errors, invalid_size, .init = redirect_all_stdout)
{
	launch_pattern_recon("Invalid size", 1, 1);
	cr_assert_stdout_eq_str("none");
}
Test(errors, random_input, .init = redirect_all_stdout)
{
	launch_pattern_recon("EPITECH is the LEET.", 42, 1337);
	cr_assert_stdout_eq_str("none");
}
