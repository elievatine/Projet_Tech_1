#include <stdlib.h>

char	*infin_add(char *str1, char *str2);

int		my_putstr(char const *str);

int		main(int argc, char **argv)
{
	char *res;
	if (argc != 3)
		return (84);
	res = infin_add(argv[1], argv[2]);
	my_putstr(res);
	return (0);
}
