#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char const *str)
{
	int i = 0;

	while(str[i] != '\0') {
		i++;
	}
	return (i);
}

int prog_name(char const *pathname)
{
	int i = 0;
	char *tmp;

	tmp = malloc(sizeof(char) * my_strlen(pathname) + 1);
	printf("%s", "Program name: ");
	if (pathname[i] != '\0') {
		while (pathname[i] != ' ') {
			tmp[i] = pathname[i];
			i = i + 1;
		}
	printf("%s\n", tmp);
	}
//	free(tmp);
}

int main(int ac, char **av)
{
		prog_name(av[1]);
	return (0);
}
