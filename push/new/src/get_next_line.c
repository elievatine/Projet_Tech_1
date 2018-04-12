/*
** Epitech PROJECT, 2018
** get_next_line.c
** File description:
** next line
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_strchr(char const *str, char c)
{
	int i = 0;

	while (str[i]) {
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char* strcon(char *s1, char *s2, int *i)
{
	char *tmp;
	int len;
	int k = 0;

	len = my_strlen(s1) + my_strlen(s2 + *i);
	tmp = malloc(sizeof(char) * len + 1);
	tmp[len] = '\0';
	for (int j = 0; s1[j]; j++) {
		tmp[k] = s1[j];
		k++;
	}
	for (; s2[*i] != '\0' && s2[*i] != '\n'; *i += 1) {
		tmp[k] = s2[*i];
		k++;
	}
	free(s1);
	*i = (s2[*i] == '\0') ? 0 : *i + 1;
	return (tmp);
}

char *get_next_line(int fd)
{
	static char buffer[1 + 1];
	int len;
	char *tmp;
	static int i = 0;

	tmp = malloc(sizeof(char) * 1);
	tmp[0] = '\0';
	if (i != 0) {
		if (my_strchr(buffer + i, '\n'))
			return (strcon(tmp, buffer, &i));
		tmp = strcon(tmp, buffer, &i);
	}
	while ((len = read(fd, buffer, 1)) != 0) {
		buffer[len] = '\0';
		if (my_strchr(buffer, '\n'))
			return (strcon(tmp, buffer, &i));
		else
			tmp = strcon(tmp, buffer, &i);
	}
	return (NULL);
}
