#include <stdio.h>
#include <stdlib.h>

// a void pointer can point to any data type
// a void pointer should then be casted to the address of an existing variable

int main()
{
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr = NULL;
    vptr = &i;
    printf("Value of i = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("Value of i = %c\n", *(char *)vptr);
    return 0;
}
