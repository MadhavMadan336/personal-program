# Creating a list of numbers
numbers = [1, 2, 3, 4, 5]

# Accessing elements of the list
print(numbers[0])  # Output: 1
print(numbers[2])  # Output: 3

# Modifying elements of the list
numbers[1] = 10
print(numbers)     # Output: [1, 10, 3, 4, 5]

# Appending an element to the list
numbers.append(6)
print(numbers)     # Output: [1, 10, 3, 4, 5, 6]

# Length of the list
print(len(numbers))  # Output: 6
# Creating a dictionary of fruits and their colors
fruits_colors = {
    'apple': 'red',
    'banana': 'yellow',
    'grape': 'purple',
    'orange': 'orange',
}

# Accessing values using keys
print(fruits_colors['apple'])   # Output: 'red'
print(fruits_colors['banana'])  # Output: 'yellow'

# Modifying values in the dictionary
fruits_colors['grape'] = 'green'
print(fruits_colors)           # Output: {'apple': 'red', 'banana': 'yellow', 'grape': 'green', 'orange': 'orange'}

# Adding new key-value pairs to the dictionary
fruits_colors['kiwi'] = 'brown'
print(fruits_colors)           # Output: {'apple': 'red', 'banana': 'yellow', 'grape': 'green', 'orange': 'orange', 'kiwi': 'brown'}

# Checking if a key exists in the dictionary
print('banana' in fruits_colors)  # Output: True
print('watermelon' in fruits_colors)  # Output: False

# Deleting a key-value pair from the dictionary
del fruits_colors['orange']
print(fruits_colors)           # Output: {'apple': 'red', 'banana': 'yellow', 'grape': 'green', 'kiwi': 'brown'}
