#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Structure to represent a stack
typedef struct {
    char array[MAX_SIZE];
    int top;
} Stack;

// Function to initialize the stack
void initialize(Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(Stack* stack, char item) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }

    stack->array[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return '\0';
    }

    return stack->array[stack->top--];
}

// Function to check if parentheses are matching
int areParenthesesMatching(char* expression) {
    Stack stack;
    initialize(&stack);

    int i;
    char ch;

    for (i = 0; expression[i] != '\0'; i++) {
        ch = expression[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            push(&stack, ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (isEmpty(&stack)) {
                return 0;
            }

            char top = pop(&stack);
            if ((ch == ')' && top != '(') ||
                (ch == ']' && top != '[') ||
                (ch == '}' && top != '{')) {
                return 0;
            }
        }
    }

    return isEmpty(&stack);
}

int main() {
    char expression[MAX_SIZE];

    printf("Enter an expression: ");
    fgets(expression, sizeof(expression), stdin);

    // Remove the newline character from the input
    expression[strcspn(expression, "\n")] = '\0';

    if (areParenthesesMatching(expression)) {
        printf("Parentheses are matching\n");
    } else {
        printf("Parentheses are not matching\n");
    }

    return 0;
}
