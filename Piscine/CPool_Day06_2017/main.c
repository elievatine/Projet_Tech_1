#include <stdio.h>
#include <string.h>

char *my_strcapitalize(char *str);


int	main()
{
	char *test;

	test = my_strcapitalize(strdup("Hello my name is"));
	printf("%s\n", test); 
}
