#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(Node **head, int data)
{
    Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("Node inserted at the beginning successfully.\n");
}
void insertAtEnd(Node **head, int data)
{
    Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Node inserted at the end .\n");
}
void insertAtIndex(Node **head, int data, int index)
{
    if (index < 0)
    {
        printf("Invalid index. Index should be >= 0.\n");
        return;
    }
    if (index == 0)
    {
        insertAtBeginning(head, data);
        return;
    }
    Node *newNode = createNode(data);
    Node *temp = *head;
    int count = 0;
    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        printf("Invalid index. Index exceeds the length of the list.\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Node inserted at index %d .\n", index);
}
void displayList(Node *head)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }
    Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    Node *head = NULL;
    int choice, data, index;
    while (1)
    {
        printf("\n Linked List Insertion \t");
        printf("1. Insert at the beginning\t");
        printf("2. Insert at the end\t");
        printf("3. Insert at a specific index\t");
        printf("4. Display the list\t");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            insertAtBeginning(&head, data);
            break;
        case 2:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;
        case 3:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            printf("Enter the index: ");
            scanf("%d", &index);
            insertAtIndex(&head, data, index);
            break;
        case 4:
            displayList(head);
            break;
        case 5:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid choice.");
        }
    }
}