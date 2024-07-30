// #include<stdio.h>
// #define N 5;
// int n = 5;
// int stack[5];
// int top = -1;
// void push(){
//     int x;
//     printf("Enter data : ");
//     scanf("%d", &x);
//     if(top == n-1){
//         printf("Overflow");
//     }
//     else{
//         top++;
//         stack[top]=x;
//     }
// }
// void pop(){
//     int item;
//     if(top==-1){
//         printf("overflow");
//     }
//     else{
//         item = stack[top];
//         top--;
//         printf("%d", item);
//     }
// }
// void main(){
//     push();
//     pop();
//     //peek();

// }

#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;
int isEmpty() {
    return top == -1;
}
int isFull() {
    return top == MAX_SIZE - 1;
}
void push(int item) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}
int peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return -1;
    }

    return stack[top];
}
void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(23);
    push(34);
    push(45);
    peek();
    display();

    printf("Top element: %d\n", peek());

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Top element: %d\n", peek());
    display();

    return 0;
}
