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

// print out all the string characters passed as inpur

void print(int n, ...)
{
    va_list words;
    int i = 0;

    va_start(words, n);

    for (i = 0; i < n; i++)
    {
        printf("%s", va_arg(words, char *));
    }

    va_end(words);
}


int main()
{
    print(3, "Hello", " - ", "World\n");
    print(7, "My", " ", "name", " ", "is", " ", "Feranmi\n");

    return 0;
}
