#include <stdio.h>
#include <stdlib.h>

// writing string to file with fputs

int main()
{
    FILE *filePointer;

    filePointer = fopen("file4.txt", "w+");

    fputs("This is about the endangered species", filePointer);
    fputs("Please keep the animals safe", filePointer);

    fclose(filePointer);

    return 0;
}
