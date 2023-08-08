def main():
    # Creating a dictionary with some key-value pairs
    fruits_dict = {
        "apple": "red",
        "banana": "yellow",
        "grape": "purple",
        "orange": "orange"
    }

    # Creating an array (list) with some fruits
    fruits_list = ["apple", "banana", "grape", "orange", "kiwi"]

    # Accessing values in the dictionary using the elements of the array
    for fruit in fruits_list:
        if fruit in fruits_dict:
            color = fruits_dict[fruit]
            print(f"The color of {fruit} is {color}.")
        else:
            print(f"{fruit} is not found in the dictionary.")

if __name__ == "__main__":
    main()
