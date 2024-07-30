#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Structure to represent a circular queue
typedef struct {
    Node* front;
    Node* rear;
} CircularQueue;

// Function to initialize the circular queue
void initialize(CircularQueue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

// Function to check if the circular queue is empty
int isEmpty(CircularQueue* queue) {
    return queue->front == NULL;
}

// Function to enqueue an element into the circular queue
void enqueue(CircularQueue* queue, int item) {
    // Create a new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = item;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        // If the circular queue is empty, set both front and rear to the new node
        queue->front = newNode;
    } else {
        // Otherwise, add the new node at the end and update the rear pointer
        queue->rear->next = newNode;
    }

    // Make the queue circular by connecting the rear node to the front node
    newNode->next = queue->front;
    queue->rear = newNode;
}

// Function to dequeue an element from the circular queue
int dequeue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Circular Queue Underflow\n");
        return -1;
    }

    // Remove the front node and update the front pointer
    Node* frontNode = queue->front;
    int item = frontNode->data;

    if (queue->front == queue->rear) {
        // If the queue has only one element, set both front and rear to NULL
        queue->front = NULL;
        queue->rear = NULL;
    } else {
        // Otherwise, update the front pointer and make the queue circular
        queue->front = queue->front->next;
        queue->rear->next = queue->front;
    }

    free(frontNode);
    return item;
}

// Function to get the front element of the circular queue
int getFront(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Circular Queue is empty\n");
        return -1;
    }

    return queue->front->data;
}

// Function to display the elements of the circular queue
void display(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Circular Queue is empty\n");
        return;
    }

    printf("Circular Queue elements: ");
    Node* currentNode = queue->front;
    do {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    } while (currentNode != queue->front);
    printf("\n");
}

// Function to free the memory occupied by the circular queue
void destroy(CircularQueue* queue) {
    if (isEmpty(queue)) {
        return;
    }

    Node* currentNode = queue->front;
    Node* nextNode;
    do {
        nextNode = currentNode->next;
        free(currentNode);
        currentNode = nextNode;
    } while (currentNode != queue->front);

    queue->front = queue->rear = NULL;
}

int main() {
    CircularQueue queue;
    initialize(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    display(&queue);

    printf("Front element: %d\n", getFront(&queue));

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));
    display(&queue);

    destroy(&queue);

    return 0;
}
