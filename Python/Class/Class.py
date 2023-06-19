class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def calculate_area(self):
        return self.width * self.height

    def calculate_perimeter(self):
        return 2 * (self.width + self.height)


# Create an instance of the Rectangle class
rectangle = Rectangle(5, 3)

# Calculate and print the area of the rectangle
area = rectangle.calculate_area()
print("Area:", area)

# Calculate and print the perimeter of the rectangle
perimeter = rectangle.calculate_perimeter()
print("Perimeter:", perimeter)
