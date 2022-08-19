#include <stdio.h>
#include <stdlib.h>

//pointers passed by reference
// These changes value of numbers outside the function

void square(int *num)
{
    *num =(*num) * (*num);

}

int main()
{
    int price = 3;
    printf("value of price before function call: %d\n", price);
    square(&price);
    printf("value of price after function call: %d\n", price);

    return 0;
}
