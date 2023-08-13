class TupleManipulator:
    def __init__(self):
        self.my_tuple = ()

    def create_tuple(self, *elements):
        self.my_tuple = elements

    def display_tuple(self):
        return self.my_tuple

    def get_element(self, index):
        if 0 <= index < len(self.my_tuple):
            return self.my_tuple[index]
        else:
            return "Index out of range"

    def add_element(self, element):
        self.my_tuple += (element,)

    def remove_element(self, index):
        if 0 <= index < len(self.my_tuple):
            self.my_tuple = self.my_tuple[:index] + self.my_tuple[index + 1:]
        else:
            return "Index out of range"

# Creating an instance of the class
tuple_manipulator = TupleManipulator()

# Creating a tuple and displaying it
tuple_manipulator.create_tuple(1, 2, 3, 4, 5)
print("Tuple:", tuple_manipulator.display_tuple())

# Adding an element to the tuple
tuple_manipulator.add_element(6)
print("Updated Tuple:", tuple_manipulator.display_tuple())

# Getting an element from the tuple
index = 2
print(f"Element at index {index}: {tuple_manipulator.get_element(index)}")

# Removing an element from the tuple
index_to_remove = 1
tuple_manipulator.remove_element(index_to_remove)
print("Updated Tuple:", tuple_manipulator.display_tuple())
