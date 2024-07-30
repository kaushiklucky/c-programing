# Q17
# Initialize arrays A and B
A = [1, 3, 4, 5, 7, 8, 10, 12, 13, 15]
B = [2, 4, 6, 8, 9, 11, 13, 14, 16, 17]

# Initialize array C with a size of 20
C = [0] * 20

# Merge the two arrays into C
i = 0  # index for A
j = 0  # index for B
k = 0  # index for C

while i < len(A) and j < len(B):
    if A[i] < B[j]:
        C[k] = A[i]
        i += 1
    else:
        C[k] = B[j]
        j += 1
    k += 1

# Add any remaining elements from A or B to C
while i < len(A):
    C[k] = A[i]
    i += 1
    k += 1

while j < len(B):
    C[k] = B[j]
    j += 1
    k += 1

# Print the merged array C
print(C)