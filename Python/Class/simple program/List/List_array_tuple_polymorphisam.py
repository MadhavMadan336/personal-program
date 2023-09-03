# Import the numpy library for arrays
import numpy as np

# Define a function that takes different data structures and prints their lengths
def print_length(data_structure):
    print("Length:", len(data_structure))

# Create a list, a tuple, and an array
my_list = [1, 2, 3, 4, 5]
my_tuple = (1, 2, 3, 4, 5)
my_array = np.array([1, 2, 3, 4, 5])

# Call the function with different data structures
print("List:")
print_length(my_list)

print("\nTuple:")
print_length(my_tuple)

print("\nArray:")
print_length(my_array)
