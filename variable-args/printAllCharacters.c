#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*va_list, va_start, va_arg, va_end*/

/*
va_list	 argList	Declares a variable list
va_start (va_list, n) Takes a va_list and initialize it for n number of variables
va_end (va_list) clean memory reserved for va list by removing it
va_arg (va_list, int) Return the next argument value, the data type of value is given in its second assignment
*/

// print out all the characters passed as input

void print(int n, ...)
{
    va_list argsList;
    int i = 0;

    va_start(argsList, n);

    printf("%d", va_arg(argsList, int));
    printf("%c", va_arg(argsList, int));
    printf("%s", va_arg(argsList, char *));
    printf("%f", va_arg(argsList, double));

    va_end(argsList);
}


int main()
{
    print(3, 58, 'a', "Hello world", 1.63);

    return 0;
}
