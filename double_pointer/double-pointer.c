#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declaring a double pointer
    int **ipp;

    // declaring some ints
    int i = 5, j = 6, k = 7;

    //initializing some pointers
    int *ip1 = &i, *ip2 = &j;

    // assigning our double pointer
    ipp = &ip1;

    /*
    ipp points to ip1 which points to i
    *ipp is ip1
    **ipp is i(5)
    */

    printf("&ipp: %p\n", &ipp);
    printf("&**ipp: %p\n", &**ipp);
    printf("**ipp: %d\n", **ipp);
    printf("&*ip1: %p\n", &*ip1);
    printf("*ip1: %d\n", *ip1);
    printf("ip1: %p\n", ip1);

    printf("&*ip2: %p\n", &*ip2);
    printf("*ip2: %d\n", *ip2);
    printf("ip2: %p\n", ip2);

    printf("\nAn alteration has occurred here\n details\t*ipp = ip2\n");
    *ipp = ip2;

    printf("&ipp: %p\n", &ipp);
    printf("&**ipp: %p\n", &**ipp);
    printf("**ipp: %d\n", **ipp);
    printf("&*ip1: %p\n", &*ip1);
    printf("*ip1: %d\n", *ip1);
    printf("ip1: %p\n", ip1);

    printf("&*ip2: %p\n", &*ip2);
    printf("*ip2: %d\n", *ip2);
    printf("ip2: %p\n", ip2);

    printf("\nAnother alteration has occurred here\n details\t*ipp = &k\n");
    *ipp = &k;

    printf("&ipp: %p\n", &ipp);
    printf("&**ipp: %p\n", &**ipp);
    printf("**ipp: %d\n", **ipp);
    printf("&*ip1: %p\n", &*ip1);
    printf("*ip1: %d\n", *ip1);
    printf("ip1: %p\n", ip1);

    printf("&*ip2: %p\n", &*ip2);
    printf("*ip2: %d\n", *ip2);
    printf("ip2: %p\n", ip2);

    return 0;
}
