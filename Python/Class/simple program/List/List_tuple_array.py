# Lists
fruits_list = ["apple", "banana", "orange", "kiwi"]
numbers_list = [1, 2, 3, 4, 5]

# Arrays (using numpy library)
import numpy as np

numbers_array = np.array([10, 20, 30, 40, 50])

# Tuples
person_tuple = ("John", 30, "New York")

# Accessing elements
print("List elements:")
print("Fruits:", fruits_list)
print("Numbers:", numbers_list)

print("\nArray elements:")
print("Numbers:", numbers_array)

print("\nTuple elements:")
print("Person:", person_tuple)

# Modifying elements
fruits_list[0] = "pear"
# Arrays cannot be modified like lists, but you can create a new array with modifications

# Tuples are immutable, so you cannot directly modify them

# Accessing individual elements
print("\nAccessing individual elements:")
print("First fruit:", fruits_list[0])
print("Third number:", numbers_list[2])
print("Second number from the array:", numbers_array[1])
print("Name:", person_tuple[0])
print("Age:", person_tuple[1])
print("City:", person_tuple[2])

# Slicing
print("\nSlicing:")
print("Fruits from index 1 to 3:", fruits_list[1:4])
print("Numbers from index 2 to the end:", numbers_list[2:])
print("Numbers from index 1 to 3:", numbers_array[1:4])

# Length of lists, arrays, and tuples
print("\nLength:")
print("Length of fruits list:", len(fruits_list))
print("Length of numbers list:", len(numbers_list))
print("Length of numbers array:", len(numbers_array))
print("Length of person tuple:", len(person_tuple))
