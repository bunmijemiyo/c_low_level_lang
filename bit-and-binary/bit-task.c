#include <stdio.h>
#include <stdlib.h>

/*
write a program that reads two integers from the user
Your program will print the results of applying
the ~ operator to each number
the &, |, and ^ operators to the pair
the << and >> operations to a specific number
show the results as binary strings(need to write a decimalToBinary functions)
*/

long long convertDecimalToBinary(int n);

void unaryOperator(int a)
{
    int result;
    result = ~ a;
    long long binResult = convertDecimalToBinary(result);
    printf("using => ~\ta: %d\t result: %d\t result in Binary: %lld\n", a, result, binResult);
}

void andOperator(int a, int b)
{
    int result = a & b;
    long long binResult = convertDecimalToBinary(result);
    printf("using => &\ta: %d\t b: %d\t result: %d\t result in Binary: %lld\n", a, b, result, binResult);
}

void orOperator(int a, int b)
{
    int result = a | b;
    long long binResult = convertDecimalToBinary(result);
    printf("using => |\ta: %d\t b: %d\t result: %d\t result in Binary: %lld\n", a, b, result, binResult);
}

void xorOperator(int a, int b)
{
    int result = a ^ b;
    long long binResult = convertDecimalToBinary(result);
    printf("using => ^\ta: %d\t b: %d\t result: %d\t result in Binary: %lld\n", a, b, result, binResult);
}

void leftShift(int a)
{
    int result = a << 2;
    long long binResult = convertDecimalToBinary(result);
    printf("using => <<\ta: %d\t result: %d\t result in Binary: %lld\n", a, result, binResult);
}

void rightShift(int a)
{
    int result = a >> 2;
    long long binResult = convertDecimalToBinary(result);
    printf("using => >>\ta: %d\t result: %d\t result in Binary: %lld\n", a, result, binResult);
}

int main()
{
    int a;
    int b;

    printf("Please enter a number: ");
    scanf("%d", &a);

    printf("Please enter another number: ");
    scanf("%d", &b);

    andOperator(a, b);
    orOperator(a, b);
    xorOperator(a, b);
    unaryOperator(a);
    rightShift(a);
    leftShift(a);

    return 0;
}


long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder , i = 1;

    while(n != 0)
    {
        remainder = n % 2;
        n = n / 2;
        binaryNumber += remainder * i;
        i = i * 10;
    }
    return binaryNumber;
}
