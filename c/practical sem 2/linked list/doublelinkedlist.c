#include <stdio.h>
#include <stdlib.h>
// Structure for a node in the doubly linked list
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
// Global variable for the head of the linked list
struct Node *head = NULL;
// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the beginning of the linked list
void insertAtBeginning(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    printf("Node inserted successfully!\n");
}
// Function to insert a node at the end of the linked list
void insertAtEnd(int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    printf("Node inserted successfully!\n");
}
// Function to display the linked list in forward direction
void displayForward()
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        struct Node *temp = head;
        printf("Forward: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
// Function to display the linked list in reverse direction
void displayReverse()
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        printf("Reverse: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->prev;
        }
        printf("\n");
    }
}
// Function to free the memory allocated for the linked list
void freeMemory()
{
    struct Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("Memory freed successfully!\n");
}
int main()
{
    int choice, data;
    do
    {
        // printf("\n Doubly Linked List Menu \n");
        printf("1. Insert node at the beginning\n");
        printf("2. Insert node at the end\n");
        printf("3. Display the linked list (forward)\n");
        printf("4. Display the linked list (reverse)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            insertAtBeginning(data);
            break;
        case 2:
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            insertAtEnd(data);
            break;
        case 3:
            displayForward();
            break;
        case 4:
            displayReverse();
            break;
        case 5:
            freeMemory();
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
