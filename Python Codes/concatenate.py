string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")
#Replacing 'A' with 'a'
final_string = (string1.replace('A', 'a') + string2.replace('A', 'a'))
# printing final string
print("The new concatenated string is : " + final_string)