char1 = input("Enter the first character: ")
char2 = input("Enter the second character: ")
char1=char1.lower()
char2=char2.lower()
calculate=ord(char2)-ord(char1)
if(calculate<0):
    calculate=calculate*(-1)
print("The distance between", char1, "and", char2, "is:", calculate)