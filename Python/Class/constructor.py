class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")

# Creating objects and using the constructor
person1 = Person("Alice", 30)
person2 = Person("Bob", 25)

# Calling the method on each object
person1.say_hello()
person2.say_hello()
