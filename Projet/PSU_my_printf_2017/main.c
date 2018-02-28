#include <unistd.h>
#include <stdio.h>

int	my_printf(char *format, ...);

int		main()
{
	my_printf("%p%p%p", "2540020", "234", "100");
	printf("%s", "\n   VS   \n");
	printf("%p%p%p","2540020", "234", "100");
}

