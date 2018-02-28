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
	launch_pattern_recon( [echo "(3+6) ./calc (0123456789)" "()+-*/%" (3)]";
	cr_assert_stdout_eq_str("[echo "3+6" | ./calc 0123456789 "()+-*/%" 3] 9");
}

Test(bistro1, second, .init = redirect_all_std)
{
	launch_pattern_recon(echo "2453+1111" | ./calc 0123456789 "()+-*/%" 9);
	cr_assert_stdout_eq_str("[echo "2453+1111" | ./calc 0123456789 "()+-*/%" 9] 3564");
}

Test(bistro1, third, .init = redirect_all_std)
{
	launch_pattern_recon(echo "-3+6" | ./calc 0123456789 "()+-*/%" 4);
	cr_assert_stdout_eq_str("[echo "-3+6" | ./calc 0123456789 "()+-*/%" 4] 3");
}

Test(bistro1, fourth , .init = redirect_all_std)
{
	launch_pattern_recon(echo ("-3+(-6)"), 7);
	cr_assert_stdout_eq_str(("-3+-6") | ./calc 0123456789 "()+-*/%" 7] -9");
}
