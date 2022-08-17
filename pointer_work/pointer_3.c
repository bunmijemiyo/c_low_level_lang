#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void copyString(char to[], char from[] )
{
    int i;

    for (i = 0; from[i] != '\0'; ++i)
        to[i] = from[i];
    to[i] = '\0';

    printf(" CopyString: %s\n", to);
}

void copyString2(char *to, char *from)
{
    for(; *from != '\0'; ++from, ++to)
        *to = *from;
    //*to = '\0';

}

void copyString3(char *to, char *from)
{
    while(*from)
        {
            //printf("*from: %c\n", *from);
            //printf("*to: %c\n", *to);
            *to++ = *from++;
        }
        *to = '\0';

}



int main()
{
    int i;

    char multiple[] = "a string";
    char names[10];
    char str1[] = "A string is to be copied";
    char str2[20];
    char word1[] = "Where are you?";
    char word2[20];

    copyString(names , multiple );

    copyString3(str2, str1);
    printf("copyString2: %s\n", str2);

    copyString3(word2, word1);
    printf("copyString3: %s\n", word2);

    return 0;
}
