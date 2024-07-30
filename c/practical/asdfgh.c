#include <stdio.h>
#include <string.h>

#define MAX_STATES 100

// Define a structure to hold information about a state
struct State {
    char name[50];
    int population;
    float literacy_rate;
    int income;
};

int main() {
    int num_states;
    struct State states[MAX_STATES];

    // Ask user to enter the number of states
    printf("Enter the number of states: ");
    scanf("%d", &num_states);

    // Read in information about each state
    for (int i = 0; i < num_states; i++) {
        printf("\nEnter information for state %d:\n", i+1);
        printf("Name: ");
        scanf("%s", states[i].name);
        printf("Population: ");
        scanf("%d", &states[i].population);
        printf("Literacy rate: ");
        scanf("%f", &states[i].literacy_rate);
        printf("Income: ");
        scanf("%d", &states[i].income);
    }

    // Find the state with the highest literacy rate and income
    int max_index = 0;
    float max_literacy_rate = states[0].literacy_rate;
    int max_income = states[0].income;
    for (int i = 1; i < num_states; i++) {
        if (states[i].literacy_rate > max_literacy_rate) {
            max_literacy_rate = states[i].literacy_rate;
            max_income = states[i].income;
            max_index = i;
        } else if (states[i].literacy_rate == max_literacy_rate && states[i].income > max_income) {
            max_income = states[i].income;
            max_index = i;
        }
    }

    // Display the state with the highest literacy rate and income
    printf("\nState with highest literacy rate and income:\n");
    printf("Name: %s\n", states[max_index].name);
    printf("Population: %d\n", states[max_index].population);
    printf("Literacy rate: %f\n", states[max_index].literacy_rate);
    printf("Income: %d\n", states[max_index].income);

    return 0;
}