# Q 18
str = input("Enter a string: ")
ch = input("Enter the character you want to search for: ")
count = 0
for i in range(0, len(str), 1):
    if(str[i] == ch):
        count = count + 1

print("The number of occurences of '", ch, "' in the line of text is", count, sep="")