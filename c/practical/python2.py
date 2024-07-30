# Q11
num = int(input("Enter a number: "))
rev = 0

while num > 0:
    # get the last digit of num
    digit = num % 10
    
    # add digit to rev, shifted left by the appropriate amount
    rev = (rev * 10) + digit
    
    # remove the last digit from num
    num = num // 10

print("Reversed number:", rev)