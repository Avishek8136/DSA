# define the function
def case_change(input_string):
    # initialize empty string to store result
    result_string = ""
    # iterate through the input string
    for char in input_string:
        if char.isupper():
            result_string += char.lower() # change upper to lower
        else:
            result_string += char.upper() # change lower to upper
    return result_string

# take user input
input_string = input("Enter a string : ")
# call the function and print the result
print(case_change(input_string))