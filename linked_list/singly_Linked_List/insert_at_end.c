#include <stdio.h>
#include <stdlib.h>

// Insert new data at end of the linked list
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
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    // printf("head: %d\n", head->data);

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;
    //printf("head: %d, link: %p, head->link->data: %d\n", head->data, head->link, head->link->data);
    //printf("current: %d\n", current->data);

    //creating a 3rd linked list and more
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;
    // printf("head: %d, link: %p, head->link->data: %d\n", head->data, head->link, head->link->data);
    // printf("current: %d\n", current->data);

    current = malloc(sizeof(struct node));
    current->data = 9;
    current->link = NULL;
    head->link->link->link = current;

    current = malloc(sizeof(struct node));
    current->data = 25;
    current->link = NULL;
    head->link->link->link->link = current;
    printf("head: %d, link: %p, head->link->data: %d\n", head->data, head->link, head->link->data);
    printf("current: %d\n\n", current->data);

    add_at_end(head, 70);
    add_at_end(head, 20);
    print_all_data(head);
    return 0;
}
