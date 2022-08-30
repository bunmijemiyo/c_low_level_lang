#include <stdio.h>
#include <stdlib.h>

void orLogical(void)
{
    short int a1 = 61;
    short int a2 = 147;
    short int a3 = 0;

    a3 = a1 | a2;

    printf("Logical OR: %u\n", a3);

    /*
    a1 = 0000 0000 0011 1101
    a2 = 0000 0000 1001 0011
    ------------------------
    a3 = 0000 0000 1011 1111 = 191
    */
}

void xorLogical(void)
{
    short int a1 = 61;
    short int a2 = 147;
    short int a3 = 0;

    a3 = a1 ^ a2;

    printf("Logical XOR: %u\n", a3);

    /*
    a1 = 0000 0000 0011 1101
    a2 = 0000 0000 1001 0011
    ------------------------
    a3 = 0000 0000 1010 1110 = 174
    */
}

void andLogical()
{
    short int w1 = 25;
    short int w2 = 77;
    short int w3 = 0;

    w3 = w1 & w2;
    printf("Logical AND: %d\n", w3);

    /*
    w1 = 0000 0000 0001 1001
    w2 = 0000 0000 0100 1101
    --------------------------
    w3 = 0000 0000 0000 1001 = 9
    */
}

void swapVariableWithBit(void)
{
    short int a1 = 61;
    short int a2 = 147;
    short int a3 = 0;

    printf("\nBefore Swap\na1: %u, a2: %u\n\n", a1, a2);

    a1 ^= a2;
    printf("After Swap1\na1: %u, a2: %u\n\n", a1, a2);

    a2 ^= a1;
    printf("After Swap2\na1: %u, a2: %u\n\n", a1, a2);

    a1 ^= a2;
    printf("After Swap3\na1: %u, a2: %u\n", a1, a2);
}

int main()
{

    andLogical();
    orLogical();
    xorLogical();
    swapVariableWithBit();

    return 0;
}
