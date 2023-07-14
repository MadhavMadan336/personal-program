# Creating a tuple
person = ('John', 25, 'USA')

# Accessing tuple elements
print(person[0])  # Output: John
print(person[1])  # Output: 25
print(person[2])  # Output: USA

# Tuple unpacking
name, age, country = person
print(name)      # Output: John
print(age)       # Output: 25
print(country)   # Output: USA

# Attempting to modify a tuple (throws an error)
person[1] = 30   # Throws a TypeError: 'tuple' object does not support item assignment
