#include <stdio.h>
#include <stdlib.h>

/*
write a C program that creates a structure pointer and passes it to a function
create a structure named item with the following members
itemname -pointer
quantity int
price float
amount - float (stores quantity * price)

create a function named readitem that takes a structure pointer of type item a s a parameter
this function should read in (from the user) a product name, price, and quantity
the contents read in should be stored in the passed in structure to the function

create a function named print item that takes as a parameter a structure pointer of type item
function prints the contents of the parameter

the main function should declare an item and a pointer to them
you will need to allocate memory for the itemname pointer
the item pointer should be passed into both the read and print item functions
*/

struct item
{
    char *itemName;
    int qty;
    float price;
    float amount;  //(stores quantity * price)
};

void readItem(struct item *i);
void printItem(struct item *i);

int main()
{
    struct item itm;
    struct item *pItem;

    pItem = &itm;

    pItem->itemName = (char *) malloc(sizeof(char) * 30);

    if (pItem == NULL)
    {
    printf("There is a memory problem");
         exit(-1);
    }

    //read item
    readItem(pItem);

    //print(item)
    printItem(pItem);

    free(pItem->itemName);

    return 0;
}

void readItem(struct item*i)
{

    printf("Enter product name: ");
    scanf("%s", i->itemName);

    printf("Enter price: ");
    scanf("%f", &i->price);

    printf("Enter quantity: ");
    scanf("%d", &i->qty);

    i->amount = (float)i->qty * i->price;
}

void printItem(struct item *i)
{
    /*print item details*/
    printf("\nname: %s", i->itemName);
    printf("\nprice: %f", i->price);
    printf("\nQuantity: %d", i->qty);
    printf("\nTotal Amount: %.2f", i->amount);


}
