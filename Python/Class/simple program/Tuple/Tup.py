# Create a tuple
my_tuple = (1, 2, 3, 4, 5)

# Accessing elements of a tuple
print("First element:", my_tuple[0])
print("Last element:", my_tuple[-1])

# Slicing a tuple
print("Slice:", my_tuple[1:4])

# Length of a tuple
print("Length:", len(my_tuple))

# Check if an element exists in a tuple
print("Exists:", 3 in my_tuple)

# Iterate over a tuple
print("Iterating over the tuple:")
for element in my_tuple:
    print(element)

# Concatenating tuples
new_tuple = my_tuple + (6, 7, 8)
print("Concatenated tuple:", new_tuple)

# Unpacking a tuple
a, b, c, d, e = my_tuple
print("Unpacked elements:", a, b, c, d, e)
