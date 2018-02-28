/*
 ** EPITECH PROJECT, 2017
 ** my_print_params.c
 ** File description:
 ** display arg received on the command line
 */

void	my_putchar(char c);

int	my_print_params(int argc,char **argv)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (a < argc) {
		while (argv[a][b]) {
			my_putchar(argv[a][b]);
			b++;
			}
		my_putchar('\n');
		b = 0;
		a++;
	}
	return(0);
}

int	main(int argc,char **argv)
{
	my_print_params(argc, argv);
	return(0);
}

