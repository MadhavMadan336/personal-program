class MyList:
    def __init__(self):
        self.data = []

    def append(self, item):
        self.data.append(item)

    def remove(self, item):
        self.data.remove(item)

    def get(self, index):
        return self.data[index]

    def size(self):
        return len(self.data)

    def __str__(self):
        return str(self.data)


# Example usage:
if __name__ == "__main__":
    my_list = MyList()
    my_list.append(1)
    my_list.append(2)
    my_list.append(3)

    print("My List:", my_list)  # Output: My List: [1, 2, 3]

    print("Size of the list:", my_list.size())  # Output: Size of the list: 3

    print("Element at index 1:", my_list.get(1))  # Output: Element at index 1: 2

    my_list.remove(2)
    print("My List after removing 2:", my_list)  # Output: My List after removing 2: [1, 3]
