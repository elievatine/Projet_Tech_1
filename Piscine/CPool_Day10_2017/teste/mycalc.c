void	my_addi(int a, int b)
{
	my_putchar(a + b);
}

void	my_soustr(int a, int b)
{
	my_putchar(a - b);
}

void	my_multi(int a, int b)
{
	my_putchar(a * b);
}

void	my_divi(int a, int b)
{
	if (b != 0)
		my_putchar(a / b);
	else
		my_putstr("Stop : division by zero");
}

void	my_modul(int a, int b)
{
	if (b != 0)
		my_putchar(a % b);
	else
		my_putstr("Stop : modulo by zero");
}
