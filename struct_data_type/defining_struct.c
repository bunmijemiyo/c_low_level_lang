#include <stdio.h>
#include <stdlib.h>
/* Defining a stucture and declaring variable at the same time
struct date
{
    int month;
    int day;
    int year;
} today;
*/

/* This is just a struct definition. No memory is used her */
struct date
{
    int month;
    int day;
    int year;
};

struct date today; // declaaration of struct. memory is been used here

int main()
{

    today.month=9;
    today.day=25;
    today.year=2015;

    printf("Today's date is %i-%i-%.2i.\n", today.month, today.day, today.year % 100);
    return 0;
}

/*
struct
{
    int month;
    int day;
    int year;
} today;
if a structure is defined like this, it can only be used once
it cannot be reused again.
*/
