#include <stdio.h>
#include <stdlib.h>

#define US 0
#define UK 1
#define France 2
#define Germany 3
#define Country US

int main(void)
{
    #if Country == US || Country == UK
        #define Greeting "Hello."
    #elif  Country == France
        #define Greeting "Bonjour"
    #elif Country == Germany
        #define Greeting
    #endif // Country

    printf("Greeting is: %s", Greeting);

    return 0;
}
