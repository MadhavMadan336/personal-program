def main():
    # Create an array of integers
    numbers = [1, 2, 3, 4, 5]

    # Accessing elements of the array
    print("The first element of the array is:", numbers[0])
    print("The third element of the array is:", numbers[2])

    # Modifying elements of the array
    numbers[1] = 10
    print("After modifying, the array becomes:", numbers)

    # Array length
    print("The length of the array is:", len(numbers))

    # Adding elements to the array
    numbers.append(6)
    print("After adding an element, the array becomes:", numbers)

    # Removing elements from the array
    numbers.pop(2)
    print("After removing an element, the array becomes:", numbers)

    # Looping through the array
    print("Array elements:")
    for num in numbers:
        print(num)

if __name__ == "__main__":
    main()
