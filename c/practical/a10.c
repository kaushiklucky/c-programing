/*A company has categorized its employees at 4 different levels(from1 to 4). For differentemployees
 at different levels the perks are as follows
Level TA entertainment Allowance
1 7000 3000
2. 6000 2000
3 5000 1500
4. 5000 1500
For Level 1 Basic salary is between Rs 40000 to 60000 and Tax rate is 10%For level 2 Basic Salary is 
between Rs 30000 to 40000 and Tax rate is 8%For level 3 Basic salary is between Rs 20000 to 30000 and
 Tax rate is 5%For Level 4 Basic Salary is between Rs 15000 to 20000 and tax rate is 0
Gross Salary is sum of Basic salary, Perks and HRA which is 25% of Basic Salary
Tax is computed on Gross Salary. Net Salary is Gross salary- Income tax
Write a Program that will read Employees name, Level and Basic pay and will print Grosssalary, 
Tax and Net Salary. Use Switch-case statement and if statements*/

#include <stdio.h>

int main() {
  char name[100];
  int level, basic_pay;
  int perks, tax, gross_salary, net_salary;

  printf("Enter employee name: ");
  scanf("%s", name);
  printf("\nEnter employee level (1-4): ");
  scanf("%d", &level);
  printf("\nEnter basic pay: ");
  scanf("%d", &basic_pay);

  switch(level) {
    case 1:
      perks = 7000 + 3000;
      if (basic_pay >= 40000 && basic_pay <= 60000) {
        tax = (basic_pay + perks) * 0.1;
      }
      else {
        printf("Invalid basic pay for level 1 employee.\n");
        return 0;
      }
      break;
    case 2:
      perks = 6000 + 2000;
      if (basic_pay >= 30000 && basic_pay <= 40000) {
        tax = (basic_pay + perks) * 0.08;
      }
      else {
        printf("Invalid basic pay for level 2 employee.\n");
        return 0;
      }
      break;
    case 3:
      perks = 5000 + 1500;
      if (basic_pay >= 20000 && basic_pay <= 30000) {
        tax = (basic_pay + perks) * 0.05;
      }
      else {
        printf("Invalid basic pay for level 3 employee.\n");
        return 0;
      }
      break;
    case 4:
      perks = 5000 + 1500;
      if (basic_pay >= 15000 && basic_pay <= 20000) {
        tax = 0;
      }
      else {
        printf("Invalid basic pay for level 4 employee.\n");
        return 0;
      }
      break;
    default:
      printf("Invalid employee level.\n");
      return 0;
  }

  gross_salary = basic_pay + perks + basic_pay * 0.25;
  net_salary = gross_salary - tax;

  printf("Employee name: %s\n", name);
  printf("Gross salary: %d\n", gross_salary);
  printf("Tax: %d\n", tax);
  printf("Net salary: %d\n", net_salary);

  return 0;
}