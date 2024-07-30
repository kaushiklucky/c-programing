#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlisttriversal(struct node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertAtFirst(struct node * head , int data){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    
    return ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;
    struct node *fifth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    // linked list for second node
    head->data = 7;
    head->next = second;

    // linked list for third node
    second->data = 11;
    second->next = third;

    // linked list for forth node
    third->data = 23;
    third->next = forth;

    // linked list for fifth node
    forth->data = 34;
    forth->next = fifth;

    // terminating linked list at the fifth node
    fifth->data = 56;
    fifth->next = NULL;

    linkedlisttriversal(head);
    head = insertAtFirst(head,5);

    return 0;

}