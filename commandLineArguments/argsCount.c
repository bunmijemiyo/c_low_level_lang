#include <stdio.h>
#include <stdlib.h>

// argc represents the number of arguments passed to the command line
// argv[0] represent the file(project) name
// argv[1] and above represents other variables passed to the command line

int main(int argc, char *argv[])
{
    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line first argument: %s\n", argument2);

    return 0;
}

