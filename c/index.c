#include <stdio.h>
#include <stdlib.h>

// Structure to represent an Employee
struct Employee {
    int emp_id;
    char emp_name[50];
    char state[50];
    char dob[12];
    double salary;
    int position;
    struct Employee* next;
};

// Create a new Employee node
struct Employee* createEmployee(int emp_id, const char* emp_name, const char* state, const char* dob, double salary, int position) {
    struct Employee* newEmployee = (struct Employee*)malloc(sizeof(struct Employee));
    if (newEmployee == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newEmployee->emp_id = emp_id;
    strcpy(newEmployee->emp_name, emp_name);
    strcpy(newEmployee->state, state);
    strcpy(newEmployee->dob, dob);
    newEmployee->salary = salary;
    newEmployee->position = position;
    newEmployee->next = NULL;
    return newEmployee;
}

// Add an Employee to the end of the list
void addEmployee(struct Employee** head, struct Employee* newEmployee) {
    if (*head == NULL) {
        *head = newEmployee;
    } else {
        struct Employee* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newEmployee;
    }
}

// Remove the first Employee (head) from the list
void removeRetiredEmployee(struct Employee** head) {
    if (*head != NULL) {
        struct Employee* temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

// Erase an Employee's record by emp_id
void eraseEmployee(struct Employee** head, int emp_id) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->emp_id == emp_id) {
        struct Employee* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    struct Employee* current = *head;
    struct Employee* prev = NULL;
    while (current != NULL && current->emp_id != emp_id) {
        prev = current;
        current = current->next;
    }
    if (current == NULL) {
        return; // Employee not found
    }
    prev->next = current->next;
    free(current);
}

// Display the list of Employees
void displayEmployees(struct Employee* head) {
    struct Employee* current = head;
    while (current != NULL) {
        printf("Emp ID: %d, Emp Name: %s, Position: %d\n", current->emp_id, current->emp_name, current->position);
        current = current->next;
    }
}

int main() {
    struct Employee* head = NULL;

    // Adding employees
    addEmployee(&head, createEmployee(1, "John", "CA", "1990-01-01", 100000, 2));
    addEmployee(&head, createEmployee(2, "Alice", "NY", "1985-05-15", 90000, 3));
    addEmployee(&head, createEmployee(3, "Bob", "TX", "1982-11-30", 110000, 1));
    addEmployee(&head, createEmployee(4, "Eve", "CA", "1995-07-20", 80000, 4));

    printf("Initial Employee List:\n");
    displayEmployees(head);

    removeRetiredEmployee(&head);
    printf("\nAfter Removing Retired Employee:\n");
    displayEmployees(head);

    eraseEmployee(&head, 2);
    printf("\nAfter Erasing Employee with Emp ID 2:\n");
    displayEmployees(head);

    return 0;
}