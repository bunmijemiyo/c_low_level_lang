#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
write a function that converts a binary number to a numeric value
Take in a long long data type 
return an int
*/

int convertBinaryToDecimal(long long n);

int main()
{
    long long n;
    int result = 0;
    printf("Enter a binary number: ");
    scanf("%lld", &n);

    result = convertBinaryToDecimal(n);

    printf("%lld in binary = %d in decimal", n, result);
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder = 0;

    while(n != 0)
    {
        remainder = n % 10;
        n = n / 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
}
