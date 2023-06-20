class Animal:
    def __init__(self, name):
        self.name = name

    def sound(self):
        pass


class Dog(Animal):
    def sound(self):
        return "Woof!"


class Cat(Animal):
    def sound(self):
        return "Meow!"


# Creating instances of the classes
animal = Animal("Animal")
dog = Dog("Buddy")
cat = Cat("Whiskers")

# Calling the sound method on the instances
print(animal.sound())  # Output: None (since Animal class has no implementation)
print(dog.sound())     # Output: Woof!
print(cat.sound())     # Output: Meow!
