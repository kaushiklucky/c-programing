# Q 10
# Function to calculate gross salary
def calculate_gross_salary(level, basic_pay):
    if level == 1:
        entertainment_allowance = 3000
        ta = 7000
        tax_rate = 0.1
    elif level == 2:
        entertainment_allowance = 2000
        ta = 6000
        tax_rate = 0.08
    elif level == 3:
        entertainment_allowance = 1500
        ta = 5000
        tax_rate = 0.05
    elif level == 4:
        entertainment_allowance = 1500
        ta = 5000
        tax_rate = 0
    else:
        print("Invalid level.")
        return

    if level == 1 and (basic_pay < 40000 or basic_pay > 60000):
        print("Basic pay should be between 40000 and 60000 for Level 1.")
        return
    elif level == 2 and (basic_pay < 30000 or basic_pay > 40000):
        print("Basic pay should be between 30000 and 40000 for Level 2.")
        return
    elif level == 3 and (basic_pay < 20000 or basic_pay > 30000):
        print("Basic pay should be between 20000 and 30000 for Level 3.")
        return
    elif level == 4 and (basic_pay < 15000 or basic_pay > 20000):
        print("Basic pay should be between 15000 and 20000 for Level 4.")
        return

    hra = 0.25 * basic_pay
    gross_salary = basic_pay + entertainment_allowance + ta + hra
    tax = tax_rate * gross_salary
    net_salary = gross_salary - tax

    print("Gross salary: Rs", gross_salary)
    print("Tax: Rs", tax)
    print("Net salary: Rs", net_salary)

# Reading employee details
employee_name = input("Enter employee name: ")
level = int(input("Enter employee level (1-4): "))
basic_pay = int(input("Enter employee basic pay: "))

# Calculating and printing salary details
print("\nSalary details for", employee_name)
calculate_gross_salary(level, basic_pay)