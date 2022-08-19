#include <stdio.h>
#include <stdlib.h>

void malloc_input()
{
    int textSize;
    char *text;

    printf("Please enter the length of the text: ");
    scanf("%d", &textSize);
    printf("Length: %d\n", textSize);

    text = (char *) malloc(sizeof(char) * textSize);

    /* always check the return value of malloc before using it.
    if the return value is NULL, please display any info and end the operation.
    if it is not equal to NULL, go ahead and use it.*/
    if (text != NULL)
    {
        printf("Type your text here: ");
        scanf("%s", text);
        //scanf(" ");
        /* gets() allow us to read characters with spaces */
        // gets(text);
        printf("You entered: %s\n", text);
    }

    free(text);
    text = NULL;
}

int main()
{
    malloc_input();

    return 0;
}
