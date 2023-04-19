#include "file_io.h"

int main(int argc, char **argv)
{
	struct dirent *dp;
	DIR *dfd =  opendir("Files");
	if ( !dfd)
	{
		return (1);
	}
	

	entity = readdir(dir);

	while (entity != NULL)
	{
		printf("%s\n", entity->d_name);
	}

	char *dir;

	dir =  argv[1];

	if (argc == 1)
	{
		printf("Usage: %s dirname\n", argv[0]);
		return (0);
	}
	if ((dfd = opendir(dir)) == NULL)
	{
		fprintf(stderr, "Unable to open %s\n", dir);
		return (0);
	}

	char filename_qfd[100];
	char new_name_qfd[100];

	while ((dp = readdir(dfd)) != NULL)
	{
		struct stat stbuf;
		sprintf(filename_qfd, "%s%s", dir, dp->d_name);
		if (stat(filename_qfd, &stbuf) == -1)
		{
			printf("Unable to stat file: %s\n", filename_qfd);
			continue;
		}
		if ((stbuf.st_mode & S_IFMT) == S_IFDIR)
		{
			continue;
		}
		else
		{
			char *new_name = dp->d_name;
			sprintf(new_name_qfd, "%s/%s", dir, new_name);
			rename(filename_qfd, new_name_qfd);
		}
	}
	return (
}
