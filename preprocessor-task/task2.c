#include <stdio.h>
#include <stdlib.h>

#define MYDEF 5

int main(void)
{
    #if MYDEF == 5
        printf("Hello");
    #endif // MYDEF

    return 0;
}
