#include <stdio.h>
#include <stdlib.h>

// effective way to change the value of what a pointer is pointing to

void foo(int **ptr)
{
    int a = 5;
    *ptr = &a;
}

int main()
{
    int *ptr = NULL;
    ptr = (int *) malloc(sizeof(int));
    *ptr = 10;

    foo(&ptr);
    printf("%d\n", *ptr);
    return 0;
}
