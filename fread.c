#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
/**
 *
 *
 *
 */
int main()
{
	FILE *fp;
	int i;
	int errnum;

	if ((fp = fopen("Files/MyResume.pdf", "rb")) == NULL)
	{
		errnum = errno;

		fprintf(stderr, "Error: %d\n", errno);
		perror("perror\n");
		fprintf(stderr, "Error: %s\n", strerror(errnum));
		exit (-1);
	}
	if (fread(&fp, sizeof(FILE), 1, fp) == 0)
	  {
	    printf("%lu", (unsigned long)fp);
	    fclose(fp);
	  }
	else
	  
	return (0);
}
