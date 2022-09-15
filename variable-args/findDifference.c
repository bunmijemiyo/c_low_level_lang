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

// find the difference between the odd number and even numbers in a
// variable argument list

int findDifference(int n, ...)
{
    va_list argsList;
    int num = 0;
    int i = 0;
    int oddSum = 0;
    int evenSum = 0;

    /* initialize the list */
    va_start(argsList, n);

    for (i = 0; i < n; i++)
    {
        num = va_arg(argsList, int);

        if (num % 2 == 0)
        {
            evenSum += num;
        }
        else
        {
            oddSum += num;
        }

    }
    return abs(oddSum - evenSum);

    va_end(argsList);
}

int main()
{
    int diff = 0;
    diff = findDifference(5, 1, 3, 10, 20, 15);
    printf("The difference between the odd and even numbers is: %d\n", diff);

    diff = findDifference(3, 18, 25, 22);
    printf("The difference between the odd and even numbers is: %d\n", diff);
    return 0;
}
