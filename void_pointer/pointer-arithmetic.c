#include <stdio.h>
#include <stdlib.h>

// It is not advisable to use void pointer for pointer arithmetic

int main()
{

    int aiData[3] = {100, 200, 300}; // integer pointer
    void *pvData = &aiData[1]; // float pointer

    pvData += sizeof(int);
    printf("%d", *(int *)pvData);

    return 0;
}
