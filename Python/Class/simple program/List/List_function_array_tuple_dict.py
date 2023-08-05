# Function to calculate the sum of elements in an array
def calculate_sum(arr):
    return sum(arr)

# Example array
my_array = [1, 2, 3, 4, 5]

# Call the function to calculate the sum of the array elements
result = calculate_sum(my_array)
print("Sum of the array:", result)

# Example tuple
my_tuple = (10, 20, 30)

# Accessing elements in the tuple
print("Elements in the tuple:")
for item in my_tuple:
    print(item)

# Example dictionary
my_dict = {
    "name": "John",
    "age": 30,
    "city": "New York"
}

# Accessing values in the dictionary
print("Details in the dictionary:")
for key, value in my_dict.items():
    print(f"{key}: {value}")
