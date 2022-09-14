#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/*
va_list		Declares a variable list
va_start (va_list, n) Takes a va_list and initialize it for n number of variables
va_end (va_list) clean memory reserved for va list by removing it
va_arg (va_list, int) Return the next argument value, the data type of value is given in its second assignment
*/

double average(int num, ...)
{
    double sum = 0.0;
    int i;

    va_list argsList;

    va_start(argsList, num);

    for (i = 0; i < num; i++)
    {
        sum += va_arg(argsList, int);
    }

    va_end(argsList);

    printf("num: %d, sum: %f\n", num, sum);

    return sum / num;
}

int main()
{
    printf("Average of 2,4,6 is %f\n\n", average(2,4,6));
    printf("Average of 2,10,30 is %f\n\n", average(2,10,30));
    printf("Average of 5,1,2,7,88,2 is %f\n\n", average(5,1,2,7,88,2));

    return 0;
}
