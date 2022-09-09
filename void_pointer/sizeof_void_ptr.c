#include <stdio.h>
#include <stdlib.h>


int main()
{
    void *pvData = NULL; // void pointer
    int *iData = NULL; // integer pointer
    float *fData = NULL; // float pointer
    char *cData = NULL; // character pointer
    double *dData = NULL; // double pointer

    // size of void pointer
    printf("size of void pointer = %ld\n\n", sizeof(pvData));
    printf("size of double pointer = %ld\n\n", sizeof(dData));
    printf("size of integer pointer = %ld\n\n", sizeof(iData));
    printf("size of character pointer = %ld\n\n", sizeof(cData));
    printf("size of float pointer = %ld\n\n", sizeof(fData));


    return 0;
}
