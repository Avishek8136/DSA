list_of_numbers = list(map(int, input("Enter the list of numbers: ").split()))
odd_numbers = [num for num in list_of_numbers if ((num % 2) != 0)]
print("List of odd numbers:",odd_numbers)