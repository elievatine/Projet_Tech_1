#include <stdio.h>
#include "../include/gnl.h"
#include <unistd.h>

int function_4_all(char *str, char **env)
{
	char **argu;

	argu = my_str_to_word_array(str, ' ');
	if (my_strcmp(str, "cd")) {
		built_cd(argu ,env);
		printf(getcwd(NULL, 0));
	}
	else if (my_strcmp(str, "setenv"))
		built_setenv();
	else if (my_strcmp(str, "unsetenv"))
		built_unsetenv();
	else if (my_strncmp(str, "./", 2))
		my_exec();
	else
		my_execv(argu);
}




int main(int ac, char **av, char **env)
{
	char *str;
	char **evip;
	int i = 0;

	while (1) {
		my_putstr("\e[32mElie \e[36m(O)> : \e[0m");
		str = rb_epurstr(get_next_line(0));
		function_4_all(str, env);
	}
	return (0);
}
