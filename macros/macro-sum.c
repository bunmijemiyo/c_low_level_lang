#include <stdio.h>
#include <stdlib.h>

/*
write a program that defines a macro that accepts two parameters and returns the sum of the given numbers
#define MACRO_NAME(params) MACRO_BODY
MACRO_NAME should be SUM
params are the parameters passed to macro
MACRO_BODY is the code for the actual logic of the macro
Your program should have the users enter the two numbers
Your program should then display the sum as output by invoking the above macro
*/

#define SUM(x, y) (x + y)

int main()
{
    int a;
    int b;
    int numSum;

    printf("Please enter the first number: ");
    scanf("%d", &a);

    printf("Please enter the second number: ");
    scanf("%d", &b);

    numSum = SUM(a, b);

    printf("\nsum of %d and %d is: %d", a, b, numSum);
    return 0;
}
