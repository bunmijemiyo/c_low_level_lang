#include <stdio.h>
#include <stdlib.h>

void rightShift()
{
    unsigned int w1 = 4151832098; // 1111 0111 0111 0111 1110 1110 0010 0010
    unsigned int w2 = 5; // 101
    int result = 0;
    int result2 = 0;

    result = w1 >> 1; // 0111 1011 1011 1011 1111 0111 0001 0001 = 2075916046
    result2 = w2 >> 2; // 0000 0000 0000 0000 0000 0000 0000 01

    printf("\nRight Shift Values\n");
    printf("w1: %d, Result: %d\n", w1, result);
    printf("w2: %d, Result: %d\n\n", w2, result2);
}

void leftShift()
{
    int w1 = 3; // 0000 0000 0000 0000 0000 0000 0000 0011
    int w2 = 138; // 0000 0000 0000 0000 0000 0000 1000 1010
    int result = 0;
    int result2 = 0;

    result = w1 << 1; //0000 0000 0000 0000 0000 0000 0000 0110
    result2 = w2 << 2; // 0000 0000 0000 0000 0000 0010 0010 1000

    printf("\nLeft Shift values\n");
    printf("w1: %d, Result: %d\n", w1, result);
    printf("w2: %d, Result: %d\n", w2, result2);
}

int main()
{
    leftShift();
    rightShift();
    return 0;
}
