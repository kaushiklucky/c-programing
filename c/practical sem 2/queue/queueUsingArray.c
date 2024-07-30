#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int isEmpty() {
    return (front == -1 && rear == -1);
}
int isFull() {
    return (rear + 1) % MAX_SIZE == front;
}
void enqueue(int item) {
    if (isFull()) {
        printf("Queue Overflow\n");
        return;
    }
    else if (isEmpty()) {
        front = rear = 0;
    }
    else {
        rear = (rear + 1) % MAX_SIZE;
    }

    queue[rear] = item;
}
int dequeue() {
    int item;

    if (isEmpty()) {
        printf("Queue Underflow\n");
        return -1;
    }
    else if (front == rear) {
        item = queue[front];
        front = rear = -1;
    }
    else {
        item = queue[front];
        front = (front + 1) % MAX_SIZE;
    }

    return item;
}
int getFront() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }

    return queue[front];
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", queue[rear]);
}

int main() {
    enqueue(3);
    enqueue(5);
    enqueue(7);
    display();

    printf("Front element: %d\n", getFront());

    printf("Dequeued element: %d\n", dequeue());
    printf("Dequeued element: %d\n", dequeue());
    printf("Front element: %d\n", getFront());

    display();

    return 0;
}
