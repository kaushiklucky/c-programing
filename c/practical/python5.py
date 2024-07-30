# Q14
# prompt the user to enter the number of Fibonacci numbers to generate
m = int(input("Enter the number of Fibonacci numbers to generate: "))

# initialize variables to store the first two Fibonacci numbers
a = 1
b = 1

# print the first two Fibonacci numbers
print(a)
print(b)

# use a do-while loop to generate the remaining Fibonacci numbers
i = 2  # start with the third Fibonacci number
while i < m:
    c = a + b
    print(c)
    a = b
    b = c
    i += 1