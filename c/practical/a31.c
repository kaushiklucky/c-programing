/*Q31 Define a structure data type called time_struct containing three members hour, minuteand second.
 Develop a program that will input values from the user and assignvaluestothe individual members and display 
the the time in the following format 16:40:40*/

#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

int main() {
    struct time_struct time;

    printf("Enter hour: ");
    scanf("%d", &time.hour);
    printf("Enter minute: ");
    scanf("%d", &time.minute);
    printf("Enter second: ");
    scanf("%d", &time.second);

    printf("The time is: %02d:%02d:%02d\n", time.hour, time.minute, time.second);

    return 0;
}