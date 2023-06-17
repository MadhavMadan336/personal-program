class Shape:
    def __init__(self, color):
        self.color = color

    def display_color(self):
        print(f"The shape's color is {self.color}")


class Rectangle(Shape):
    def __init__(self, color, width, height):
        super().__init__(color)
        self.width = width
        self.height = height

    def display_area(self):
        area = self.width * self.height
        print(f"The area of the rectangle is {area}")


class Circle(Shape):
    def __init__(self, color, radius):
        super().__init__(color)
        self.radius = radius

    def display_area(self):
        area = 3.14 * self.radius * self.radius
        print(f"The area of the circle is {area}")


# Create instances of the derived classes
rectangle = Rectangle("Red", 5, 10)
circle = Circle("Blue", 7)

# Accessing methods and attributes of the base class
rectangle.display_color()
circle.display_color()

# Accessing methods specific to each derived class
rectangle.display_area()
circle.display_area()
