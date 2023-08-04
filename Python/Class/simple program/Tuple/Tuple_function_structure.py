# Defining a simple function
def add_numbers(a, b):
    return a + b

# Creating a class that uses a tuple as a property
class Point:
    def __init__(self, x, y):
        self.coordinates = (x, y)

    def get_x(self):
        return self.coordinates[0]

    def get_y(self):
        return self.coordinates[1]

# Using the functions and class
num1 = 5
num2 = 10
result = add_numbers(num1, num2)
print("The sum of {} and {} is {}".format(num1, num2, result))

point1 = Point(2, 3)
print("Point 1 - X coordinate:", point1.get_x())
print("Point 1 - Y coordinate:", point1.get_y())
