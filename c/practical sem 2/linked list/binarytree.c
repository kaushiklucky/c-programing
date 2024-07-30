#include <stdio.h>
#include <stdlib.h>
// Structure for a node in the binary tree
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Function to insert a node into the binary tree
struct Node *insertNode(struct Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    int choice;
    printf("Enter 1 to insert the node in the left subtree of %d or 2 to insert in the right subtree: ",
           root->data);
    scanf("%d", &choice);
    if (choice == 1)
    {
        root->left = insertNode(root->left, data);
    }
    else if (choice == 2)
    {
        root->right = insertNode(root->right, data);
    }
    else
    {
        printf("Invalid choice\n");
    }
    return root;
}
// Function to display the binary tree in preorder traversal
void displayPreorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        displayPreorder(root->left);
        displayPreorder(root->right);
    }
}
// Function to free the memory allocated for the binary tree
void freeBinaryTree(struct Node *root)
{
    if (root != NULL)
    {
        freeBinaryTree(root->left);
        freeBinaryTree(root->right);
        free(root);
    }
}
int main()
{
    struct Node *root = NULL;
    int choice, data;
    do
    {
        printf("\n Binary Tree Menu \n");
        printf("1. Insert a node\n");
        printf("2. Display the tree (preorder)\n");
        printf("3. Exit\n");
        // printf("-----------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            root = insertNode(root, data);
            break;
        case 2:
            printf("Preorder traversal: ");
            displayPreorder(root);
            printf("\n");
            break;
        case 3:
            freeBinaryTree(root);
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 3);
    return 0;
}