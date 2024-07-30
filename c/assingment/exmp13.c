//Write a program to calculate the salary as per the coditions
//Date:30/12/22
#include<stdio.h>
int main(){
    char Gender;
    int Year_of_service, Qualification, Salary;
    printf("\nEnter Gender, Year_of_service, Qualification(0 for Graduation, 1 for post graduation): ");
    scanf("%c %d %d", &Gender, &Year_of_service, &Qualification);
     if( Gender == 'M' && Year_of_service <= 10 && Qualification == 1)
        Salary = 11000;
     else if ((Gender == 'M' && Year_of_service >= 10 && Qualification == 0) || (Gender == 'M' && Year_of_service < 10 && Qualification == 1))
        Salary = 10000;
     else if ( Gender == 'M' && Year_of_service < 10 && Qualification == 0 )
        Salary = 7000;
     else if ( Gender == 'F' && Year_of_service >= 10 && Qualification == 1)
        Salary = 12000;
     else if ( Gender == 'F' && Year_of_service >= 10 && Qualification == 0)
        Salary = 9000;
     else if ( Gender == 'F' && Year_of_service < 10 && Qualification == 1)
        Salary = 10000;
     else if( Gender == 'F' && Year_of_service < 10 && Qualification == 0)
        Salary = 6000;
    printf("\nSalary of Employee = %d\n", Salary);
    return 0;
}