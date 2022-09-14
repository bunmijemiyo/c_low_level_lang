#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

// a print function like printf

void print(char *placeholders, ...);

int main()
{

    print("ddfd", 4, 2, 10.5, 3);
    //print("fffd", -1.2, 2.5, 3.4, 10);
    //print("dddfdd", 1,2,3,5.5,-1,-2);

    return 0;
}


void print(char *placeholders, ...)
{
    int num_args = strlen(placeholders);

    va_list args;
    va_start(args, placeholders);

    for(int i = 0; i < num_args; i++)
    {
        if(placeholders[i] == 'd')
        {
            int x = va_arg(args, int);
            printf("%d\n", x);
        }
        else if(placeholders[i] == 'f')
        {
            double x = va_arg(args, double);
            printf("%f\n", x);

        }
    }
    va_end(args);
}
