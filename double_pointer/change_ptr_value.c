#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

// effective way to change the value of what a pointer is pointing to



void foo(char **ptr)
{
    *ptr = malloc(255);
    strcpy(*ptr, "Hello World");
}

int main()
{
    char *ptr = NULL;

    foo(&ptr);
    printf("%s\n", ptr);

    free(ptr);

    return 0;
}
