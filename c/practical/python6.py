# Q 15
import math

# prompt the user to enter the value of x in degrees
x_deg = float(input("Enter the value of x in degrees: "))

# convert x to radians
x_rad = math.radians(x_deg)

# initialize variables for the current term, the sum of the terms, and the sign of the next term
term = x_rad
sum_terms = term
sign = -1

# set the desired accuracy level
accuracy = 0.0001

# initialize a counter for the number of terms
n = 1

# loop until the absolute value of the current term is less than the desired accuracy
while abs(term) > accuracy:
    # calculate the next term using the formula (-1)^(n+1) * x^(2n+1) / (2n+1)!
    sign *= -1
    n += 1
    term = sign * x_rad**(2*n-1) / math.factorial(2*n-1)
    
    # add the current term to the sum of the terms
    sum_terms += term

# print the result
print("sin({:.4f}) = {:.4f}".format(x_deg, sum_terms))