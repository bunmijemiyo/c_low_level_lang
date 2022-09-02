#include <stdio.h>
#include <stdlib.h>

/*
write a C program to find the square and cube of a number using macros
You should create two macros
a SQUARE macro
a CUBE macro
You need to figure out how many parameters there should be
Your program should have the user enter any number
Your program should then display the square and cube of the number as output by invoking the above macros
Example ouput
Enter any number to find the square and cube: 10
SQUARE(10) = 100
CUBE(10)=1000
*/


#define SQUARE(x) (x * x)
#define CUBE(x) (x * x * x)

int main()
{
    int num;
    int squareResult;
    int cubeResult;

    printf("Please enter the any number: ");
    scanf("%d", &num);

    squareResult = SQUARE(num);
    cubeResult = CUBE(num);

    printf("\nSQUARE(%d) = %d", num, squareResult);
    printf("\nCUBE(%d) = %d", num, cubeResult);
    return 0;
}
