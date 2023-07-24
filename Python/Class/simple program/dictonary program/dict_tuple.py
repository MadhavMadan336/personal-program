def main():
    # Create an empty dictionary
    my_dict = {}

    # Add tuples as keys and their corresponding values to the dictionary
    my_dict[('apple', 'red')] = 5
    my_dict[('banana', 'yellow')] = 3
    my_dict[('grape', 'purple')] = 8
    my_dict[('orange', 'orange')] = 4

    # Access values using tuples as keys
    print("Number of red apples:", my_dict[('apple', 'red')])
    print("Number of purple grapes:", my_dict[('grape', 'purple')])

    # Check if a tuple is in the dictionary
    if ('banana', 'yellow') in my_dict:
        print("Number of yellow bananas:", my_dict[('banana', 'yellow')])
    else:
        print("Yellow bananas not found in the dictionary.")

    # Loop through the dictionary and print all key-value pairs
    print("\nAll items in the dictionary:")
    for key, value in my_dict.items():
        print(key, "->", value)

if __name__ == "__main__":
    main()
