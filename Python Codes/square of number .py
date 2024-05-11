# Program to print the squares of all numbers except for factors of 3
n = int(input("Enter the maximum limit: "))
# iterating each number in list
for i in range(1, n+1):
    # if not divisible by 3, print
    if ((i % 3) != 0):
        print(i*i)
