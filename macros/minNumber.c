#include <stdio.h>
#include <stdlib.h>

#define smallest

#define min(x, y)\
    printf("The smallest number is: %d", ((x) < (y)? (x) : (y)))

int main()
{
    int num1;
    int num2;

    printf("Pls enter the first number: ");
    scanf("%d", &num1);

    printf("Pls enter the second number: ");
    scanf("%d", &num2);

    min(num1, num2);

    return 0;
}
