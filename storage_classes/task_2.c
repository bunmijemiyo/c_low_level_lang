#include <stdio.h>
/* With a static declaration, values of items will keep
 * increasing at every call of the functio.
 * values of item are not lost through the whole life
 * circle of the program
 */

int sum (int num) {
    static int z = 0;
    z += num;

    return z;
}

int main() {
    printf("%d ",sum(25));
    printf("%d ",sum(15));
    printf("%d ",sum(30));

    return 0;
}
