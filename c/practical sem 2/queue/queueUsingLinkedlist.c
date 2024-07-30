#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Structure to represent a queue
typedef struct {
    Node* front;
    Node* rear;
} Queue;

// Function to initialize the queue
void initialize(Queue* queue) {
    queue->front = NULL;
    queue->rear = NULL;
}

// Function to check if the queue is empty
int isEmpty(Queue* queue) {
    return queue->front == NULL;
}

// Function to enqueue an element into the queue
void enqueue(Queue* queue, int item) {
    // Create a new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = item;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        // If the queue is empty, set both front and rear to the new node
        queue->front = queue->rear = newNode;
    } else {
        // Otherwise, add the new node at the end and update the rear pointer
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// Function to dequeue an element from the queue
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow\n");
        return -1;
    }

    // Remove the front node and update the front pointer
    Node* frontNode = queue->front;
    int item = frontNode->data;
    queue->front = frontNode->next;

    // If the front becomes NULL, update the rear pointer as well
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(frontNode);
    return item;
}

// Function to get the front element of the queue
int getFront(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue->front->data;
}

// Function to display the elements of the queue
void display(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    Node* currentNode = queue->front;
    while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("\n");
}

// Function to free the memory occupied by the queue
void destroy(Queue* queue) {
    Node* currentNode = queue->front;
    while (currentNode != NULL) {
        Node* temp = currentNode;
        currentNode = currentNode->next;
        free(temp);
    }
    queue->front = queue->rear = NULL;
}

int main() {
    Queue queue;
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
