/*
** EPITECH PROJECT, 2017
** concat_params.c
** File description:
** give arg into a single string
*/
char	my_concat_params(int argc, char **argv)
{
	char *tab;
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (tab = (char *)malloc(sizeof(char) * (argc - 1)))
		return (0);
	while (1 < argc)
		{
			my_strcat(tab, argv[a]);
			if (a < argc -1)
				my_strcat(tab, '\n');
			a++;
			b++;
		}
		return (tab);
}

int	main(int argc, char **argv)
{
	my_putchar(my_concat_params(argc, argv));
	return (0);
}
