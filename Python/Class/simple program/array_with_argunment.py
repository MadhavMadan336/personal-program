def process_array(arr):
    # Calculate the sum of the elements in the array
    total = sum(arr)
    
    # Find the maximum and minimum values in the array
    max_val = max(arr)
    min_val = min(arr)
    
    # Calculate the average of the elements in the array
    average = total / len(arr)
    
    # Print the results
    print("Array:", arr)
    print("Sum:", total)
    print("Maximum:", max_val)
    print("Minimum:", min_val)
    print("Average:", average)

# Example array
my_array = [12, 45, 23, 6, 78, 34]

# Call the function with the example array
process_array(my_array)
