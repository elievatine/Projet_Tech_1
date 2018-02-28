#include <unistd.h>
#include <stdio.h>

void	my_putchar(char c);

void	my_putstr(char *c);

int		my_strlen(char *c);

void	rb_print_err(char *c);

void	rb_xerror(char *c);

void	my_swap(int *a, int *b);

void	rb_putstr(char *str);

int	count_words(char *str);

int main()
{
	printf("%d\n", count_words("a   b   c   d  "));
	printf("%d\n", count_words("abcd"));
	printf("%d\n", count_words("	'\t'	q	 '\n' u	 a '\v' t r e"));
	printf("%d\n", count_words(NULL));
	return (0);
}
