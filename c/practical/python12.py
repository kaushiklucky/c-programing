# Q 39
inp = open("input.txt", "r")
out = open("outputpy.txt", "w")

print("The text in input file is: ")
for line in inp:
    print(line, end="")
    out.write(line)
inp.close()
out.close()
out = open("outputpython39.txt", "r")
print("\nThe text in the output file is: ")
print(out.read())
out.close()