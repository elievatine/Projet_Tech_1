/*
** EPITECH PROJECT, 2017
** tests_bistro1.c
** File description:
** bistro first unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
	cr_redirect_stdout();
}

Test(, , .init = redirect_all_std)
{
	launch_pattern_recon(, ,);
	cr_assert_stdout_eq_str();
}

Test(,, .init = redirect_all_std)
{
	launch_pattern_recon(,, );
	cr_assert_stdout_eq_str();
}

Test(,, .init = redirect_all_std)
{
	launch_pattern_recon(,,);
	cr_assert_stdout_eq_str();
}

Test(, , .init = redirect_all_std)
{
	launch_pattern_recon( , , );
	cr_assert_stdout_eq_str();
}
