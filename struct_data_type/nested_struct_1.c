#include <stdio.h>
#include <stdlib.h>

// Assigning and accessing data in nested structure

struct date
{
    int month;
    int day;
    int year;
};



int main()
{
    struct date today, *datePtr;
    
    datePtr = &today;

    datePtr->month = 12; // one way of assigning data
    (*datePtr).day = 20; // another way of assigning data
    datePtr->year = 2015;

    printf("Today's date is %i-%i-%.2i.\n", datePtr->month, datePtr->day, datePtr->year % 100);
    printf("Today's date is %i-%i-%.2i.\n", (*datePtr).month, (*datePtr).day, (*datePtr).year % 100);
    
    return 0;
}
