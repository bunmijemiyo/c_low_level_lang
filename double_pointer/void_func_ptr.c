#include <stdio.h>
#include <stdlib.h>

int somedisplay();

int main()
{
    int (*func_ptr)();
    func_ptr = somedisplay;
    printf("\nAddress of function somedisplay is %p\n", func_ptr);
    (*func_ptr)();
    return 0;
}

int somedisplay()
{
    printf("\n--Displaying some text--\n");

    return 0;
}
