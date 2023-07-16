def tuple_example():
    # Creating a tuple
    fruits_tuple = ('apple', 'banana', 'orange', 'grape', 'kiwi')

    # Accessing elements in a tuple
    print("Fruits in the tuple:")
    for fruit in fruits_tuple:
        print(fruit)

    # Tuples are immutable, so you can't modify them directly
    # Uncomment the line below to see the error
    # fruits_tuple[0] = 'pear'


def list_example():
    # Creating a list
    numbers_list = [1, 2, 3, 4, 5]

    # Accessing elements in a list
    print("\nNumbers in the list:")
    for num in numbers_list:
        print(num)

    # Modifying elements in a list
    numbers_list[0] = 10
    print("\nNumbers in the list after modification:")
    for num in numbers_list:
        print(num)

    # Adding elements to a list
    numbers_list.append(6)
    numbers_list.extend([7, 8, 9])
    print("\nNumbers in the list after adding elements:")
    for num in numbers_list:
        print(num)

    # Removing elements from a list
    numbers_list.remove(5)
    print("\nNumbers in the list after removing 5:")
    for num in numbers_list:
        print(num)


if __name__ == "__main__":
    print("Tuple Example:")
    tuple_example()

    print("\nList Example:")
    list_example()
