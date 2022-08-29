#include <stdio.h>
#include <stdlib.h>

#define FILENAME "test.txt"
#define FILENAME2 "new.txt"

/*
write a program that converts all characters of a file to uppercase and write the results out to a temporary file. Then rename the temporary file to the original filename and remove the temporary filename
Use the fgetc and fputc functions
use the rename and remove functions
Use the islower function
can convert a character to uppercase by subtracting 32 from it
display the contents of the original file to standard output
output should be in uppercase
*/


int main()
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;

    char ch = ' ';

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    fp1 = fopen("temp.txt", "w");

    if (fp1 == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (islower(ch))
        {
            ch = ch - 32;
            //printf("%c", ch);
        }
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    // rename temp file to test.txt
    rename(FILENAME, FILENAME2);
    rename("temp.txt", FILENAME);

    //remove the temp file
    remove(FILENAME2);

    fp = fopen(FILENAME, "r");

    if (fp == NULL)
        return -1;

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    fp = NULL;
    fp1 = NULL;

    return 0;
}
