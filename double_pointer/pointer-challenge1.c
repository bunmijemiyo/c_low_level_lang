#include <stdio.h>
#include <stdlib.h>


/*
write a program that creates, assigns, and access some double pointers
1. create a normal integer variable (non pointer) and assign it a random value
2. create a single integer pointer variable
3. create a double integer pointer variable.
4. assign the address of the normal integer variable (step 1) to the single pointer
5. assign the address of the single pointer (step 2) to the double pointer(step 3)

challenge #1
display the following output using all possible syntax
all possible ways to find value of the normal integer variable(step1)
all possible ways to find address of the normal integer variable(step1)
all possible ways to find value of the single pointer variable(step2)
all possible ways to find address of the single pointer variable(step2)
all possible ways to print thebdoublr value of the normal integer variable(step3)

challenge #1 Example Ouput
value of num is: 123
value of num using singlePointer is: 123
value of num  using doublePointer is: 123

Address of num is: 0xffffcbcc
Address of num using singlePointer is: 0xffffcbcc
Address of num using doublePointer is: 0xffffcbcc

value of Pointer singlePointer is: 0xffffcbc
value of Pointer singlePointer using doublePointer is: 0xffffcbc

value of Pointer singlePointer is: 0xffffcbc
value of Pointer singlePointer using doublePointer is: 0xffffcbc

value of Pointer doublePointer is: 0xffffcbc0
Address of Pointer doublePointer is: 0xffffcbb8
*/


void doublePointer(void)
{
    int num = 45;
    int *sPtr = NULL;
    int **dbPtr = NULL;

    sPtr = &num;
    dbPtr = &sPtr;

    printf("value of num is: %d\n", num);
    printf("value of num using singlePointer is: %d\n", *sPtr);
    printf("value of num  using doublePointer is: %d\n", **dbPtr);

    printf("\nAddress of num is: %p\n", &num);
    printf("Address of num using singlePointer is: %p\n", sPtr);
    printf("Address of num using doublePointer is: %p\n", *dbPtr);

    printf("\nAddress of Pointer singlePointer is: %p\n", &sPtr);
    printf("Address of Pointer singlePointer using doublePointer is: %p\n", &*dbPtr);

    printf("\nvalue of Pointer singlePointer is: %p\n", sPtr);
    printf("value of Pointer singlePointer using doublePointer is: %p\n", *dbPtr);

    printf("\nvalue of Pointer doublePointer is: %p\n", dbPtr);
    printf("Address of Pointer doublePointer is: %p", &dbPtr);


}

int main()
{
    doublePointer();
    return 0;
}


