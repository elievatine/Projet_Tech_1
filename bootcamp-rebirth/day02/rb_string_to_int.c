#include <unistd.h>

void	rb_xerror(char *c);

int		rb_string_to_int(char *str)
{
	int nb = 0;

	if (str == NULL)
		rb_xerror("rb_int_to_string : String pointer is NULL");
	while (*str)
		{
			nb = nb * 10;
			nb = (*str - '0') + nb;
			str++;
		}
	return (nb);
}
