# Q 16
n = 3

# loop for upper part of the pattern
for i in range(n):
    for j in range(n-i-1):
        print(" ", end="")
    for j in range(i+1):
        print(j+1, end=" ")
    for j in range(i, 0, -1):
        print(j, end=" ")
    print()

# loop for lower part of the pattern
for i in range(n-2, -1, -1):
    for j in range(n-i-1):
        print(" ", end="")
    for j in range(i+1):
        print(j+1, end=" ")
    for j in range(i, 0, -1):
        print(j, end=" ")
    print()