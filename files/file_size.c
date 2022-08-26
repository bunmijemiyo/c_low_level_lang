#include <stdio.h>
#include <stdlib.h>

// finds the size of a file
int main()
{
    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }
    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);


    printf("Total size of file.txt=%d bytes\n", len);
    return 0;
}
