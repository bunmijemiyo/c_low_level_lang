#include <stdio.h>
#include <stdlib.h>

// Insert multiple new data at end of the linked list
// Print all data in a linked list and
// calculate the total number of nodes

struct node {
    int data;
    struct node *link;
};

void print_all_data(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked List is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("data[%d]: %d\n", count, ptr->data);
        count++;
        ptr = ptr->link;
    }
    printf("\nNumber of Nodes: %d\n", count);
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*) malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

int main()
{
    int num, amount, counts;
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    print_all_data(head);

    printf("How many data do you want to add: ");
    scanf("%d", &amount);

    while(counts < amount)
    {
        counts += 1;
        printf("Please input the item[%d]: ", counts);
        scanf("%d", &num);
        add_at_end(head, num);
    }

    print_all_data(head);
    return 0;
}
