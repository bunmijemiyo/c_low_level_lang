#include <stdio.h>
#include <stdlib.h>

void func1(int);
void func2(int);

typedef void FuncType(int);

int main()
{
    FuncType *func_ptr = NULL;

    func_ptr = func1;
    (*func_ptr)(100);

    func_ptr = func2;
    (*func_ptr)(200);
    
    return 0;
}

void func1(testarg)
{
    printf("func1 got an argument of %d\n", testarg);
}

void func2(testarg)
{
    printf("func2 got an argument of %d\n", testarg);
}

