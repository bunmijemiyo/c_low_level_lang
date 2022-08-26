#include <stdio.h>
#include <stdlib.h>

#define FILENAME "file.txt"

/*
write a program to find the total number of lines in a text file
create a file that contains some lines of text
open your test file
use the fgetc function to parse characters in file until you get to the EOF
if EOF increment counter
display as output the total number of lines in the file
*/


int main()
{
    FILE *fp = NULL;
    char ch;
    int linesCount =0;

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
    {
        printf("File does not exist");
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch =='\n')
            linesCount++;
    }

    fclose(fp);
    fp = NULL;

    printf("Total number of lines in this file are: %d\n", linesCount);
}
