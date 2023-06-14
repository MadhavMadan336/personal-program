class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def get_area(self):
        return self.width * self.height

    def get_perimeter(self):
        return 2 * (self.width + self.height)

    def is_square(self):
        return self.width == self.height


# Create an instance of the Rectangle class
rectangle = Rectangle(5, 7)

# Accessing the instance methods and attributes
print("Width:", rectangle.width)
print("Height:", rectangle.height)
print("Area:", rectangle.get_area())
print("Perimeter:", rectangle.get_perimeter())
print("Is square?", rectangle.is_square())
