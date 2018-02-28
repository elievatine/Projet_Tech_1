#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	rb_xerror(char *c);

int		my_strlen(char *c);

int		isitspace(char *str, int i)
{
	if (str[i] < 33 && str[i + 1] < 33)
		return (1);
	if ((str[i] < 33 && str[i + 1] > 33) || (str[i] > 33))
		return (0);

}

char	*rb_epurstr(char *str)
{
	int i = 0;
	int y = 0;
	char *tmp;

	if (str == NULL)
		rb_xerror("rb_epurstr : String pointer is NULL");

	tmp = malloc(sizeof(char) * my_strlen(str) + 1);
	while (str[i] != '\0') {
		if (isitspace(str, i) == 0) {
			tmp[y] = str[i];
			y++;
		}
		i++;
	}
	return (tmp);
}
