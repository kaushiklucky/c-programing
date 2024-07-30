# Q 13
# define a function to calculate the HCF
def hcf(a, b):
    if b == 0:
        return a
    else:
        return hcf(b, a % b)

# prompt the user to enter two integers
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

# calculate the HCF using the function
result = hcf(a, b)

# print the result
print("The HCF of", a, "and", b, "is", result)