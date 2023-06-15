class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def say_hello(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")


# Create an instance of the Person class
person1 = Person("John", 25)

# Access the attributes of the person1 object
print(person1.name)  # Output: John
print(person1.age)  # Output: 25

# Call the say_hello() method of the person1 object
person1.say_hello()  # Output: Hello, my name is John and I am 25 years old.
