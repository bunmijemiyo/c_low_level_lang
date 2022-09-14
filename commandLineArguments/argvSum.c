#include <stdio.h>
#include <stdlib.h>

// Find the sum of arguments passed to the command line
// atoi helps to convert args to integer

int main(int argc, char* argv[])
{
    int i = 0;
    int sum = 0;

    printf("argc = %d\n", argc);
    printf("\nLet's see what is in argv[]\n");

    if (argc > 1)
    {
        for (i = 1; i < argc; i++)
        {
        printf("argv[%d] = %s\n", i, argv[i]);
        sum += atoi(argv[i]);
        }

        printf("\nsum = %d\n", sum);
    }
    else
    {
        printf("\nYou did not pass any number to the command line.\n");
    }



    return 0;
}
