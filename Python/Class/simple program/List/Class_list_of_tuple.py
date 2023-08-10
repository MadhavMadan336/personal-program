class TupleList:
    def __init__(self):
        self.data = []

    def add_tuple(self, tuple_item):
        self.data.append(tuple_item)

    def get_tuples(self):
        return self.data

# Creating an instance of the TupleList class
my_tuple_list = TupleList()

# Adding tuples to the list
my_tuple_list.add_tuple((1, 'apple'))
my_tuple_list.add_tuple((2, 'banana'))
my_tuple_list.add_tuple((3, 'cherry'))

# Getting the list of tuples
tuples = my_tuple_list.get_tuples()
print(tuples)  # Output: [(1, 'apple'), (2, 'banana'), (3, 'cherry')]
