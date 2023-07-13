class TupleProgram:
    def __init__(self):
        self.my_tuple = ()  # Initialize an empty tuple
    
    def create_tuple(self, *elements):
        self.my_tuple = tuple(elements)
    
    def display_tuple(self):
        print("Tuple elements:")
        for element in self.my_tuple:
            print(element)
    
    def get_element(self, index):
        if index >= 0 and index < len(self.my_tuple):
            return self.my_tuple[index]
        else:
            return None

# Usage example
program = TupleProgram()

program.create_tuple('apple', 'banana', 'cherry')
program.display_tuple()

element = program.get_element(1)
if element is not None:
    print(f"Element at index 1: {element}")
else:
    print("Invalid index")
