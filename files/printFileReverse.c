#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test.txt"

/*
write a program that will print the contents of a file in reverse order
use the fseek function to seek to the end of the file
use the ftell function to get the position of the file pointer
display as output the file in reverse order
*/

int main()
{
    FILE *fp = NULL;
    int cnt = 0;
    int i = 0;

    fp = fopen(FILENAME , "r");

    if (fp == NULL)
        return -1;

    // moves the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // get position of file pointer
    cnt = ftell(fp);

    while (i < cnt)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;
    return 0;
}
