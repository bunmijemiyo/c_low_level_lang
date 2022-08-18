#include <stdio.h>
#include <stdlib.h>

// function to check length of a string

int stringLength(const char *strings);

int main()
{
    printf("%Length: d\n", stringLength("My name"));
    printf("Length: %d\n", stringLength("My name is Feranmi"));
    return 0;
}

int stringLength(const char *strings)
{
    const char *lastAddress = strings;

    while(*lastAddress)
        ++lastAddress;

    return lastAddress - strings;
}
