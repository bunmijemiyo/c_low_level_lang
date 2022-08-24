#include <stdio.h>
#include <stdlib.h>

// writing to file in a specified format using fprinf

int main()
{
    FILE *fp;
    
    fp = fopen("file5.txt", "w+");
    fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 555);
    
    fclose(fp);
    
    return 0;
}
