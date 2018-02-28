#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

void my_ls(char *fichier)
{
	DIR * dir;
	struct dirent *ptr;

	dir = opendir(fichier);
	if(dir == NULL)
		exit(1);
	while((ptr = readdir(dir)) != NULL) {
		if (ptr->d_name[0] != '.')
			my_printf("%s\n", ptr->d_name);
		}
	closedir(dir); 
}

int main(int argc, char * argv[])
{
	if(argc < 1){
		my_printf("Opendir Error\n");
		exit(1);
	}
	my_ls(argv[1]);
	return 0;
}
