#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int built_cd(char **argu, char **env)
{
	char *htp = get_home(env);

	printf("AA\n");
	if (argu[1] != NULL)
		if (chdir(argu[1]) == -1)
			printf(strerror(errno));
	else
		chdir(htp);
	return (0);
}
