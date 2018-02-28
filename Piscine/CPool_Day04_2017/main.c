#include <stdio.h>

char *my_evil_str(char *str);

int		main(void)
{
	char i[50] = "HELLO";
	char *ptr;
	ptr = my_evil_str(i);
	printf("%s\n", ptr);
	return(0);
}
