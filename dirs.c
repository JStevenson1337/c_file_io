#include "file_io.h"

int main(int argc, char **argv)
{

	DIR *dir_fd =  opendir("Files");

	if ( !dir_fd)
	{
		fprintf(dir_fd , "%s\n", strerror(errno));
		return (1);
	}
	

	if (entity = readdir(dir_fd) != ) ;

	while (entity != NULL)
	{
		printf("%s\n", entity->d_name);
	}

}