# Creating a dictionary
student = {
    'name': 'John Smith',
    'age': 20,
    'major': 'Computer Science',
    'GPA': 3.8
}

# Accessing dictionary values
print(student['name'])   # Output: John Smith
print(student['age'])    # Output: 20
print(student['major'])  # Output: Computer Science
print(student['GPA'])    # Output: 3.8

# Modifying dictionary values
student['age'] = 21
student['GPA'] = 3.9
print(student)  # Output: {'name': 'John Smith', 'age': 21, 'major': 'Computer Science', 'GPA': 3.9}

# Adding new key-value pairs
student['year'] = 'Junior'
print(student)  # Output: {'name': 'John Smith', 'age': 21, 'major': 'Computer Science', 'GPA': 3.9, 'year': 'Junior'}

# Removing a key-value pair
del student['major']
print(student)  # Output: {'name': 'John Smith', 'age': 21, 'GPA': 3.9, 'year': 'Junior'}

# Iterating over dictionary
for key, value in student.items():
    print(key, ':', value)

# Output:
# name : John Smith
# age : 21
# GPA : 3.9
# year : Junior
