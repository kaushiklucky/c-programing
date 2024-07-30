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
void insertNode(Node **head, int data)
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
    printf("Node inserted \n");
}
void deleteNode(Node **head, int key)
{
    if (*head == NULL)
    {
        printf("The list is empty. Deletion failed.\n");
        return;
    }
    Node *current = *head;
    Node *prev = NULL;
    if (current != NULL && current->data == key)
    {
        *head = current->next;
        free(current);
        printf("Node deleted successfully.\n");
        return;
    }
    while (current != NULL && current->data != key)
    {
        prev = current;
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Node with key %d not found. Deletion failed.\n", key);
        return;
    }
    prev->next = current->next;
    free(current);
    printf("Node deleted.\n");
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
    int choice, data, key;
    while (1)
    {
        printf("\nLinked List Deletion\n");
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Display the list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to be inserted: ");
            scanf("%d", &data);
            insertNode(&head, data);
            break;
        case 2:
            printf("Enter the key of the node to be deleted: ");
            scanf("%d", &key);
            deleteNode(&head, key);
            break;
        case 3:
            displayList(head);
            break;
        case 4:
            printf("Exiting the program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }
    return 0;
}
