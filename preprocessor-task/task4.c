#include <stdio.h>
#include <stdlib.h>

#pragma GCC poison printf

/* Using pragma to prevent the use of some function */

int main(void)
{
    printf("Hello World!\n");

    return 0;
}
