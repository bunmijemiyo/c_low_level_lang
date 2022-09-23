#include <stdio.h>
#include <stdlib.h>

/*
A Structure is a user defined data type that can be used to group elements of
different types into a single type
Structure tag helps to identify a particular kind of structure
ptr is a pointer to some variable of type struct abc*/

struct abc
{
    int x;
    int y;
};


int main()
{
    struct abc a = {0, 1};
    struct abc *ptr = &a;

    // different ways of accessing/ printing the outcome
    printf("%d %d\n", ptr->x, ptr->y);
    printf("%d %d\n", (*ptr).x, ptr->y);
    printf("%d %d\n", (*&a).x, ptr->y);
    printf("%d %d\n", a.x, a.y);
    return 0;
}
