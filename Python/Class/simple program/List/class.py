class MyClass:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def greet(self):
        return f"Hello, my name is {self.name} and I'm {self.age} years old."

# Creating an instance of MyClass
person = MyClass("Alice", 30)

# Using the class method to greet
print(person.greet())
