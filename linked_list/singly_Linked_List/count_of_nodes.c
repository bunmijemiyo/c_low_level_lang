#include <stdio.h>
#include <stdlib.h>

// calculate the total number of nodes

struct node {
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked List is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("\nNumber of Nodes: %d\n", count);
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

    //creating a 3rd linked list
    // Metod 1
    /*
    struct node *current2 = malloc(sizeof(struct node));
    current2->data = 3;
    current2->link = NULL;
    current->link = current2;
    */

    // method 2
    current = malloc(sizeof(struct node));
    current->data = 5;
    current->link = NULL;

    head->link->link = current;
    printf("head: %d, link: %p, head->link->data: %d\n", head->data, head->link, head->link->data);
    printf("current: %d\n", current->data);

    count_of_nodes(head);
    return 0;
}
