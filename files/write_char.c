#include <stdio.h>
#include <stdlib.h>

// write a single character into file with fputc

int main()
{
    FILE *fp;
    int ch;

    fp = fopen("file3.txt", "w+");

    for(ch=33; ch <= 100; ch++)
    {
        fputc(ch, fp);
    }

    fclose(fp);


    return 0;
}
