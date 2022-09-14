#include <stdio.h>
#include <stdlib.h>

// if you run it without passing any data, argc will be one
// by default, program takes file name as args[0] 1.e first arguments
// if you pass data to it, argc value will be number of data passed plus one(the file name)

int main(int argc, char *argv[])
{
    printf("Arguments Count (argc) = %d\n", argc);
}
