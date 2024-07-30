#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Structure to represent a circular queue
typedef struct {
    int* array;
    int front;
    int rear;
    int size;
} CircularQueue;

// Function to initialize the circular queue
void initialize(CircularQueue* queue) {
    queue->array = (int*)malloc(MAX_SIZE * sizeof(int));
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
}

// Function to check if the circular queue is empty
int isEmpty(CircularQueue* queue) {
    return queue->size == 0;
}

// Function to check if the circular queue is full
int isFull(CircularQueue* queue) {
    return queue->size == MAX_SIZE;
}

// Function to enqueue an element into the circular queue
void enqueue(CircularQueue* queue, int item) {
    if (isFull(queue)) {
        printf("Circular Queue Overflow\n");
        return;
    }

    if (isEmpty(queue))
        queue->front = 0;

    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->array[queue->rear] = item;
    queue->size++;
}

// Function to dequeue an element from the circular queue
int dequeue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Circular Queue Underflow\n");
        return -1;
    }

    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;
    queue->size--;

    if (isEmpty(queue)) {
        queue->front = -1;
        queue->rear = -1;
    }

    return item;
}

// Function to get the front element of the circular queue
int getFront(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Circular Queue is empty\n");
        return -1;
    }

    return queue->array[queue->front];
}

// Function to display the elements of the circular queue
void display(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Circular Queue is empty\n");
        return;
    }

    printf("Circular Queue elements: ");
    int count = 0;
    int index = queue->front;
    while (count < queue->size) {
        printf("%d ", queue->array[index]);
        index = (index + 1) % MAX_SIZE;
        count++;
    }
    printf("\n");
}

// Function to free the memory occupied by the circular queue
void destroy(CircularQueue* queue) {
    free(queue->array);
    queue->array = NULL;
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
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
