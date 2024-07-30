/*Q30 . Write a program in C using pointers to implement insertion and deletion in a queue.
 Aqueue isa data structure that followsa first in first out i.e. the elementto go in first is theone to comeoutfirst */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
int items[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
if (rear == MAX_SIZE - 1) {
printf("Queue is full\n");
} else {
if (front == -1) {
front = 0;
}
rear++;
items[rear] = value;
}
}
int dequeue() {
if (front == -1 || front > rear) {
printf("Queue is empty\n");
return -1;
} else {
int item = items[front];
front++;
return item;
}
}
void printQueue() {
if (front == -1 || front > rear) {
printf("Queue is empty\n");
} else {
printf("Queue: ");
for (int i = front; i <= rear; i++) {
printf("%d ", items[i]);
}
printf("\n");
}
}
int main() {
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
enqueue(5);
printQueue();
dequeue();
dequeue();
printQueue();
enqueue(6);
enqueue(7);
printQueue();
return 0;
}