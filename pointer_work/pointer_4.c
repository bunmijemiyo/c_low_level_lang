#include <stdio.h>
#include <stdlib.h>

void str_len (char *str)
{
    int i = 0;
    
    while(*str)
    {
        ++i;
        *str++;
    }
    printf("Length: %d\n", i);
}


int main()
{

    char multiple[] = "a string";
    char str1[] = "A string is to be copied";
    char word1[] = "Where are you?";


    str_len(multiple);
    str_len(word1);
    str_len(str1);

    return 0;
}
