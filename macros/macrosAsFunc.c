#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define CIRCLE_AREA(x) ((PI) * (x) * (x))

int main()
{
    int area = CIRCLE_AREA(4);
    /*
    This is the macro expansion that happens behind the scene
    int area = ((3.14) * (4) * (4));
    */

    printf("area: %d", area);

    return 0;
}
