#include <stdio.h>
#include <stdlib.h>

int		my_strlen(char const *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char*	my_revstr(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = my_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

int		my_putstr(char const *str)
{
	int i;

	i = 0;
	while (str[i] != 0) {
		my_putchar(str[i]);
		i++;
		}
	return(0);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}


char	*infinit_add(char *str1, char *str2)
{
	char	*res;
	int		i;
	int		j;
	int		cpt;
	int		retenue;

	i = my_strlen(str1);
	j = my_strlen(str2);

	res =  (char *)malloc((i + j + 2) * sizeof(char));
	retenue = 0;
	cpt = 0;
	i--;
	j--;
	while (i >= 0 && j >= 0)
	{
		retenue = (str1[i] - '0') + (str2[j] - '0') + retenue;
		res[cpt++] = retenue % 10 + '0';
		retenue = retenue / 10;
		i--;
		j--;
	}
	while (i >= 0)
	{
		retenue = (str1[i] - '0') + retenue;
		res[cpt++] = retenue % 10 + '0';
		retenue = retenue / 10;
		i--;
	}
	while (j >= 0)
	{
		retenue = (str2[j] - '0') + retenue;
		res[cpt++] = retenue % 10 + '0';
		retenue = retenue / 10;
		j--;
	}
	if ((str2[0] == "-") && (str1[0] == "-"))
	{
		retenue = (str1[j] - '0') + (str2[i] - '0') + retenue;
		res[cpt++] = retenue % 10 + '0';
		retenue = retenue / 10;
		j--;
		i--;
		if (retenue)
			res[cpt] = retenue + '0';
	res = my_revstr(res);
	my_putchar('-');
	my_putstr(res);
	return (res);
	}
	if (retenue)
		res[cpt] = retenue + '0';

	res = my_revstr(res);
	return(res) ;
}
 int main(int argc, char **argv)
{
	char *res;
	if (argc != 3)
		return (84);

	res = infinit_add(argv[1], argv[2]);
	my_putstr(res);
	return (0);
}
