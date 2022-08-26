#include <stdio.h>
#include <stdlib.h>

/*
write a program to find the total number of character in a text file
create a file that contains some lines of text
open your test file
use the fgetc function to parse characters in file until you get to the EOF
if EOF increment counter
display as output the total number of lines in the file
*/

int display_file()
{
    FILE *fp;
    int c;

    fp = fopen("filex.txt", "r");

    if (fp == NULL)
    {
        perror("Error in opening file");
        return (-1);
    }

    // read a single char
    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp = NULL;

    //system("pause");
    return 0;
}

int writeFile()
{
    FILE *filePointer;

    filePointer = fopen("filex.txt", "w+");

    fputs("\tComposition on Myself\n", filePointer);
    fputs("My name is Olubunmi Olalekan O\n", filePointer);
    fputs("I love yam and egg, they are my favourites.\n", filePointer);
    fputs("I live at Lagos in Nigeria\n", filePointer);

    fclose(filePointer);

    return 0;
}

int numberOfFileChar()
{
    FILE *fp = NULL;
    int len;

    fp = fopen("filex.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }
    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);


    printf("\nTotal number of characters/ size of file.txt=%d bytes\n", len);
    return 0;
}

void main()
{
    writeFile();
    display_file();
    numberOfFileChar();
}
