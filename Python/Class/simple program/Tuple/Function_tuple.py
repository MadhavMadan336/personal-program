# Function that returns a tuple of the maximum and minimum elements from a list
def find_max_min(numbers):
    if not numbers:
        return None

    max_num = min_num = numbers[0]
    for num in numbers:
        if num > max_num:
            max_num = num
        elif num < min_num:
            min_num = num

    return max_num, min_num

# Example usage
numbers_list = [5, 2, 9, 1, 7, 3]
max_num, min_num = find_max_min(numbers_list)
print(f"Maximum number: {max_num}")
print(f"Minimum number: {min_num}")
