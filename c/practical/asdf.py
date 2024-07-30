Name = input("Enter your name: ")
date = input("enter date: ")
letter = '''Dear name
         your are selected in NSUT
         Thank you
         Date : dated'''
letter = letter.replace("name", Name)
letter = letter.replace("dated", date)
print(letter)