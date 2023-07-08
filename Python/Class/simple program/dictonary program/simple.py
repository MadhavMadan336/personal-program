# Create an empty dictionary
my_dict = {}

# Add items to the dictionary
my_dict["apple"] = 3
my_dict["banana"] = 5
my_dict["orange"] = 2

# Access values in the dictionary
print("Number of apples:", my_dict["apple"])
print("Number of bananas:", my_dict["banana"])

# Update the value of an item
my_dict["banana"] = 7
print("Updated number of bananas:", my_dict["banana"])

# Check if a key exists in the dictionary
if "orange" in my_dict:
    print("The key 'orange' exists in the dictionary.")

# Remove an item from the dictionary
del my_dict["apple"]
print("Dictionary after removing 'apple':", my_dict)

# Iterate over the dictionary
print("Iterating over the dictionary:")
for key, value in my_dict.items():
    print(key, ":", value)
