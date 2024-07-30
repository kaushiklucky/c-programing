#Q37
total = 0
max = int(input("Enter maximum marks in three subject: "))
count = 0
while count < 3:
    a = int(input("Enter marks obtained: "))
    if a > max:
        print("Entered marks exceeded total marks!")
        continue
    total += a
    count += 1
    percentage = (total*100)/(3*max)
    print("The percentage obtained is: ", round(percentage, 2))
