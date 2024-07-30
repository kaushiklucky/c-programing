/*Q32 A start-up owner is interested to maintain the dataset of the newly recruitedemployees.
She is interested in storing the Emp_Name (Str), Emp_Mobile(int), Emp_Age(int), Emp_Degree (Str),
Emp_Exp (Float), Emp_add (Structure). Emp_add needoneuserdefined data to store street no, city,
district and state for the employee address. Youhave to designadatabase where we can store all theinformation
for at least 20employees. The program should be interactive program to input the employee details andalsotheprogram
should be able to retrieve the data of an employee based on themobilenumber*/

#include <stdio.h>

struct Address
{
    int streetNumber;
    char city[30], district[30], state[30];
};


struct Employee
{
    char Emp_Name[30];
    int Emp_Mobile;
    int Emp_Age;
    char Emp_Degree[30];
    float Emp_Exp;
    struct Address Emp_Add;
};

void PrintEmployeeDetails(struct Employee employee){
    printf("Name - %s, Mobile no. - %d, Age - %d, Degree - %s, Experience - %f\n", employee.Emp_Name, employee.Emp_Mobile, employee.Emp_Age, employee.Emp_Degree, employee.Emp_Exp);
    printf("Address: %d, %s, %s, %s", employee.Emp_Add.streetNumber, employee.Emp_Add.city, employee.Emp_Add.district, employee.Emp_Add.state);
}

void main()
{
    struct Employee employees[20];
    int numberOfEmployees = 20, continueToEnter = 1;

    for (int i = 0; i < 20; i++){
        printf("Enter the employee name: ");
        gets(employees[i].Emp_Name);

        printf("Enter the mobile no.: ");
        scanf("%d", &employees[i].Emp_Mobile);

        printf("Enter the age.: ");
        scanf("%d", &employees[i].Emp_Age);
        getchar();

        printf("Enter the degree: ");
        gets(employees[i].Emp_Degree);

        printf("Enter the experience: ");
        scanf("%f", &employees[i].Emp_Exp);

        printf("Enter the street number: ");
        scanf("%d", &employees[i].Emp_Add.streetNumber);
        getchar();

        printf("Enter the city: ");
        gets(employees[i].Emp_Add.city);
        
        printf("Enter the district: ");
        gets(employees[i].Emp_Add.district);

        printf("Enter the state: ");
        gets(employees[i].Emp_Add.state);

        printf("Do you want to continue? (1 for Yes, 0 for No) ");
        scanf("%d", &continueToEnter);
        getchar();

        printf("\n");

        if (!continueToEnter){
            numberOfEmployees = i + 1;
            break;
        }
    }
    
    // struct Employee employee = {"Horace", 98178923, 23, "MBA", 151, {36, "Saket", "New Delhi", "Delhi"}};
    // PrintEmployeeDetails();


    for (int i = 0; i < numberOfEmployees; i++){
        printf("Employee %d:\n", i + 1);
        PrintEmployeeDetails(employees[i]);
        printf("\n\n");
    