#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

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
    printf("head: %d, link: %p, head->link->data: %d\n", head->data, head->link, head->link->data);
    printf("current: %d\n", current->data);
    return 0;
}
