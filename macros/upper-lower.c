#include <stdio.h>
#include <stdlib.h>

/*
Write a C program to check whether a character is uppercase or lowercase using macros
You should create two macros that accepts a single argument(character)
IS_UPPER
IS_LOWER
both of the macros should return a boolean
	true(1) or false(0) based on whether they are upper or lower case
Your macro will need to include a conditional and can use logical operators
Your program should have the user enter any character (getchar())
Your program should then display whether the character is upper or lower case as output by invoking the above macros
Example Output
Enter any character: C
'C' is uppercase
*/


// #define IS_UPPER(x) (isupper(x))
#define IS_UPPER(x) (x >= 'A' && x <= 'Z')
#define IS_LOWER(x) (x >= 'a' && x <= 'z')

int main()
{
    char letter;

    printf("Please enter the any character: ");

    letter = getchar();

    if (IS_UPPER(letter))
        printf("\"%c\" is uppercase\n", letter);
    else if(IS_LOWER(letter))
        printf("\"%c\" is lowercase\n", letter);
    else
        printf("Entered character is not an alphabet");

    return 0;
}
