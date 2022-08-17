#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int q;

    int multiple[] = {4, 5, 6, 7, 10};
    int *p = multiple;
    q = sizeof(multiple) / sizeof(multiple[0]);
    printf("Length of multiple: %d\n", q);

    for (i = 0; i < q; ++i)
        printf("multiple[%d] = %d *(p+%d) = %d &multiple{%d] = %p p+%d=%p\n",
           i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);

    return 0;
}
