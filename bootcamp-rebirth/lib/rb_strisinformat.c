#include <unistd.h>

void	rb_xerror(char *c);

int		my_strlen(char *c);

int		check(char c, char *format)
{
	int i = 0;

	while(format[i] != '\0') {
		if (c == format[i])
			return (1);
		i++;
	}
	return (0);
}

int		rb_strisinformat(char *str, char *format)
{
	int i = 0;
	int y = 0;

	if (str == NULL || format == NULL)
		rb_xerror("rb_strisinformat : String pointer is NULL");

	while (str[i] != '\0') {
		if (check(str[i], format) == 1) {
			y++;
		}
		i++;
	}
	if (y == my_strlen(str))
		return (1);
	return (0);
}
