#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// find the maximum number from a variable number of arguments

int max(int num_args, ...);

int main()
{
    int max_num = max(4, 10, 12, 20, 14, 16);

    printf("max_num: %d\n", max_num);

    return 0;
}

int max(int num_args, ...)
{
    int i, max = 0;
    va_list args;

    va_start(args, num_args);

    for (i = 0; i < num_args; i++)
    {
        int x = va_arg(args, int);

        if (i == 0) max = x;
        else if(x > max) max = x;
        //printf("x: %d\n", x);

    }

    va_end(args);

    return max;
}
