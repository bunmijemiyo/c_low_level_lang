#include <stdio.h>
#include <stdlib.h>

// using scanf to read string
// w+ creates the file if it doesn't exist

int main()
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("file2.txt", "w+");
    if (fp != NULL)
        fputs("Hello how are you", fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
    
    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Intege4 |%d|\n", year);

    fclose(fp);

    return 0;
}
