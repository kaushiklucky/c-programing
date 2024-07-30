# Q 38
n = int(input("Enter the number of employee: "))
employees = {}

for i in range(n):
    name = input("Enter the name of the employee: ")
    emp_id = input("Enter employee ID: ")
    sal = int(input("Enter the employee salary: "))
    address = input("Enter the employee address: ")
    employees[name] = [emp_id, sal, address]

    while True:
        name = input("Enter employee name you want to search for: ")
        info = employees.get(name,-1)
        if info == -1:
            print("Employees does not exist")
        else:
            print(f"Employee details are, \n Employee id: {info[0]}\n salary: {info[1]}\n address: {info[2]}")

        exit_choice = input("Do you want to exist [yes/no]: ")
        if exit_choice == 'yes' or exit_choice == 'yes':
            break
