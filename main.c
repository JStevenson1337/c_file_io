#include <stdio.h>
#include <dirent.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main(int ac, char **av)
{
        FILE *fp = NULL;
        int fp_in, i = 0;
        char fname[100];
        char *buff[2048];

        while (1)
        {
                fname = av[1];
                fp = fopen(fname, "rb");

                fprintf(fp, "data: %c\n", *av[1]);

                while (fscanf(fp, "%d", &fp_in) != EOF)
                {
                        fgets(buff[i], buff, fp);
                        buff[i][strlen(buff[i]) - 1] = '\0';
                        i++;
                }
                printf("Buffer: %h", buff);


                fclose(fp);

                return (0);
        }
        return (0);




}
