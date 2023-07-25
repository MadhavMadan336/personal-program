# Importing the array module
import array

# Creating arrays
array1 = array.array('i', [1, 2, 3])
array2 = array.array('f', [3.14, 2.71, 1.41])
array3 = array.array('str', ['apple', 'banana', 'orange'])

# Creating a dictionary with arrays as values
dictionary_with_arrays = {
    'array1': array1,
    'array2': array2,
    'array3': array3
}

# Accessing elements from the dictionary
print(dictionary_with_arrays['array1'])  # Output: array('i', [1, 2, 3])
print(dictionary_with_arrays['array2'])  # Output: array('f', [3.14, 2.71, 1.41])
print(dictionary_with_arrays['array3'])  # Output: array('str', ['apple', 'banana', 'orange'])
