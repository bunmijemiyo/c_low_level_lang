#include <stdio.h>
#include <stdlib.h>

// Different ways of initializing and adding data with c

/* This is just a struct definition. No memory is used here */
struct date
{
    int month;
    int day;
    int year;
};

struct date today; // declaration of struct. memory is been used here
struct date yesterday; // declaration of struct. memory is been used here
struct date tommorrow; // declaration of struct. memory is been used here


int main()
{
    today=(struct date) {10, 25, 2015}; // one way of adding variable
    yesterday = (struct date) {.month= 10, .day =24, .year = 2015}; // another way of adding variable
    tommorrow.month=10; // another way of adding variable
    tommorrow.day=26;
    tommorrow.year=2015;

    printf("Today's date is: %i-%i-%.2i.\n", today.month, today.day, today.year % 100);
    printf("Yesterday's date is: %i-%i-%.2i.\n", yesterday.month, yesterday.day, yesterday.year % 100);
    printf("Tommorrow's date is: %i-%i-%.2i.\n", tommorrow.month, tommorrow.day, tommorrow.year % 100);

    return 0;
}
